/*
* PROJECT:         ReactOS kernel-mode tests
* LICENSE:         LGPLv2+ - See COPYING.LIB in the top level directory
* PURPOSE:         Kernel-Mode Test Suite FsRtl Test
* PROGRAMMER:      Ashuha Arseny, Moscow State Technical University
*                  Marina Volosnikova, Moscow State Technical University
*                  Denis Petkevich, Moscow State Technical University
*/

#include <kmt_test.h>

#define NDEBUG
#include <debug.h>

/*
Tested with the system kmtest 
the following functions:
FsRtlInitializeTunnelCache
FsRtlDeleteTunnelCache
FsRtlAddToTunnelCache
FsRtlDeleteKeyFromTunnelCache
FsRtlFindInTunnelCache
*/

static PTUNNEL T;
static PTUNNEL Tb;

#define BufSize 10000

PUNICODE_STRING CopyUS(PUNICODE_STRING a)
{
    PUNICODE_STRING b = (PUNICODE_STRING)ExAllocatePool(PagedPool,sizeof(UNICODE_STRING));
    ok(b != NULL, "US is NULL after allocated memory\n");
    b->Length = 0;
    b->MaximumLength =a->MaximumLength;
    if (b->MaximumLength)
    {
        b->Buffer = (PWSTR)ExAllocatePoolWithTag(PagedPool, b->MaximumLength, 1633);
        ok(b->Buffer != NULL, "US->Buffer is NULL after allocated memory\n");
        RtlCopyUnicodeString(b, a);
    }
    else
    {
        b->Buffer = NULL;
    }
    return b;
}

void TestFsRtlInitializeTunnelCache()
{
    SIZE_T eq;
    T = ExAllocatePool(PagedPool, sizeof(TUNNEL));
    ok(T != NULL, "PTUNNEL is NULL after allocated memory\n");
    Tb = ExAllocatePool(PagedPool, sizeof(TUNNEL));
    ok(Tb != NULL, "PTUNNEL is NULL after allocated memory\n");

    memset((void*)T, 0, sizeof(TUNNEL));
    memset((void*)Tb, 0, sizeof(TUNNEL));

    FsRtlInitializeTunnelCache(T);

    eq = RtlCompareMemory((const VOID*)T, (const VOID*)Tb,  sizeof(TUNNEL));

    ok ( eq != sizeof(TUNNEL), "FsRtlInitializeTunnelCache function did not change anything in the memory at the address PTUNNEL.\n"); 
}

void TestFsRtlAddToTunnelCache(ULONGLONG DirectoryKey, PUNICODE_STRING s_name, PUNICODE_STRING l_name, BOOLEAN KeyByShortName)
{
    SIZE_T eq;
    LONG b;
    PUNICODE_STRING bs_name;
    PUNICODE_STRING bl_name;
    PVOID Bufb;
    PVOID Buf;

    Buf = ExAllocatePool(PagedPool, BufSize);
    ok(Buf != NULL, "Buff in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");
    Bufb = ExAllocatePool(PagedPool, BufSize);
    ok(Bufb != NULL, "Buff in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");

    // Allocate memory for the  bufs_name
    bs_name = CopyUS(s_name);

    // Allocate memory for the l_name and bl_name
    bl_name = CopyUS(l_name);

    memset((void*)Buf, 0, BufSize);
    memset((void*)Bufb, 0, BufSize);

    FsRtlAddToTunnelCache(T, DirectoryKey, s_name, l_name, KeyByShortName, BufSize, Buf);

    eq = RtlCompareMemory((const VOID*)Buf, (const VOID*)Bufb,  BufSize);

    ok( eq !=  sizeof(TUNNEL),"FsRtlAddToTunnelCache function did not change anything in the memory at the address Buf.\n"); 

    b = RtlCompareUnicodeString(l_name, bl_name, TRUE);
    ok (b == 0, "long name after call FsRtlAddToTunnelCache != long name befo call FsRtlAddToTunnelCache\n\n");
    b = RtlCompareUnicodeString(s_name, bs_name, TRUE);
    ok (b == 0, "short name after call FsRtlAddToTunnelCache != short name befo call FsRtlAddToTunnelCache\n\n");

    if (bs_name->Buffer) ExFreePool(bs_name->Buffer);
    ExFreePool(bs_name);
    if (bl_name->Buffer) ExFreePool(bl_name->Buffer);
    ExFreePool(bl_name);
    ExFreePool(Bufb);
    ExFreePool(Buf);
}

BOOLEAN TestFsRtlFindInTunnelCache(ULONG DirectoryKey, PUNICODE_STRING name, PUNICODE_STRING s_name, PUNICODE_STRING l_name)
{
    // Allocate memory for the Buf
    ULONG BufsizeTemp = BufSize;
    PVOID Buf = ExAllocatePool(PagedPool, BufSize*2);
    ok(Buf != NULL, "Buff in FsRtlFindInTunnelCache is NULL after allocated memory\n");

    return FsRtlFindInTunnelCache(T, DirectoryKey, name, s_name, l_name, &BufsizeTemp, Buf); 
}

void TestFsRtlDeleteKeyFromTunnelCache(ULONGLONG a)
{
    FsRtlDeleteKeyFromTunnelCache(T, a);
}

static
void DuplicatesTest()
{
    UNICODE_STRING ShortName, LongName, OutShort, OutLong, ShortName2, LongName2;
    ULONG First, Second, OutLength, OutData;
    PTUNNEL Tunnel;
    PVOID Buffer;

    First = 1;
    Second = 2;
    RtlInitUnicodeString(&ShortName, L"LONGFI~1.TXT");
    RtlInitUnicodeString(&LongName, L"Longfilename.txt");
    RtlInitUnicodeString(&ShortName2, L"LONGFI~2.TXT");
    RtlInitUnicodeString(&LongName2, L"Longfilenamr.txt");
    Tunnel = ExAllocatePool(NonPagedPool, sizeof(TUNNEL));
    RtlZeroMemory(Tunnel, sizeof(TUNNEL));
    OutShort.MaximumLength = 13 * sizeof(WCHAR);
    OutShort.Buffer = ExAllocatePool(PagedPool, OutShort.MaximumLength);
    OutLong.MaximumLength = 17 * sizeof(WCHAR);
    OutLong.Buffer = Buffer = ExAllocatePool(PagedPool, OutLong.MaximumLength);

    FsRtlInitializeTunnelCache(Tunnel);
    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &First);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "First call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);
    ok_eq_pointer(OutLong.Buffer, Buffer);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &Second);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Second call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok_eq_pointer(OutLong.Buffer, Buffer);

    OutLong.MaximumLength = 13 * sizeof(WCHAR);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Third call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok(OutLong.Buffer != Buffer, "Buffer didn't get reallocated!\n");
    ok_eq_uint(OutLong.MaximumLength, 16 * sizeof(WCHAR));

    FsRtlDeleteKeyFromTunnelCache(Tunnel, 1);
    ok_bool_false(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Fourth call");

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &First);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Fifth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName2, &LongName2, TRUE, sizeof(ULONG), &First);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Sixth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Seventh call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &Second);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Eighth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Ninth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName2, &LongName2, TRUE, sizeof(ULONG), &Second);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Tenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Eleventh call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);

    FsRtlDeleteKeyFromTunnelCache(Tunnel, 1);
    ok_bool_false(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Twelfth call");
    ok_bool_false(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Thirteenth call");

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &First);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Fourteenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName, &LongName, TRUE, sizeof(ULONG), &Second);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Fifteenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName2, &LongName2, TRUE, sizeof(ULONG), &First);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Sixteenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Seventeenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 1);

    FsRtlAddToTunnelCache(Tunnel, 1, &ShortName2, &LongName2, TRUE, sizeof(ULONG), &Second);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName, &OutShort, &OutLong, &OutLength, &OutData), "Eighteenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);
    ok_bool_true(FsRtlFindInTunnelCache(Tunnel, 1, &ShortName2, &OutShort, &OutLong, &OutLength, &OutData), "Nineteenth call");
    ok_eq_ulong(OutLength, sizeof(ULONG));
    ok_eq_ulong(OutData, 2);

    FsRtlDeleteTunnelCache(Tunnel);
    ExFreePool(OutShort.Buffer);
    ExFreePool(OutLong.Buffer);
    ExFreePool(Buffer);
    ExFreePool(Tunnel);
}

START_TEST(FsRtlTunnel)
{
    PUNICODE_STRING s_name;
    PUNICODE_STRING l_name;
    PUNICODE_STRING name;
    PUNICODE_STRING a;
    BOOLEAN is;

    //Initialize Cash
    TestFsRtlInitializeTunnelCache();

    s_name = (PUNICODE_STRING)ExAllocatePool(PagedPool,sizeof(UNICODE_STRING));
    ok(s_name != NULL, "s_name in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");
    RtlInitUnicodeString(s_name, L"smal");

    l_name = (PUNICODE_STRING)ExAllocatePool(PagedPool,sizeof(UNICODE_STRING));
    ok(l_name != NULL, "l_name in TestFsRtlAddToTunnelCache is NULL after allocated memory\n");
    RtlInitUnicodeString(l_name, L"bigbigbigbigbig");

    // Add elem
    TestFsRtlAddToTunnelCache(12345, s_name, l_name, TRUE);

    name = (PUNICODE_STRING)ExAllocatePool(PagedPool,sizeof(UNICODE_STRING));
    ok(name != NULL, "name in FsRtlFindInTunnelCache is NULL after allocated memory\n");
    RtlInitUnicodeString(name, L"smal");

    // Find
    is = TestFsRtlFindInTunnelCache(12345, name, s_name, l_name);
    ok(is == TRUE, "FsRtlFindInTunnelCache doesn't find elem id = 12345\n");

    TestFsRtlDeleteKeyFromTunnelCache(12345);	//Delete
    is = TestFsRtlFindInTunnelCache(12345, name, s_name, l_name);
    ok(is == FALSE, "TestFsRtlDeleteKeyFromTunnelCache doesn't delete elem id = 12345\n");

    is = TestFsRtlFindInTunnelCache(12347, name, s_name, l_name);
    ok(is == FALSE, "FsRtlDeleteTunnelCache doesn't clear cash\n");

    TestFsRtlAddToTunnelCache(12345, s_name, l_name, TRUE);
    TestFsRtlAddToTunnelCache(12347, s_name, l_name, TRUE);
    a = (PUNICODE_STRING)ExAllocatePool(PagedPool,sizeof(UNICODE_STRING));
    RtlInitUnicodeString(a, NULL);
    TestFsRtlAddToTunnelCache(12346, a, l_name, FALSE);

    //Clear all
    FsRtlDeleteTunnelCache(T);

    is = TestFsRtlFindInTunnelCache(12345, name, s_name, l_name);
    ok(is == FALSE, "FsRtlDeleteTunnelCache doesn't clear cash\n");

    is = TestFsRtlFindInTunnelCache(12346, name, a, l_name);
    ok(is == FALSE, "FsRtlDeleteTunnelCache doesn't clear cash\n");

    is = TestFsRtlFindInTunnelCache(12347, name, s_name, l_name);
    ok(is == FALSE, "FsRtlDeleteTunnelCache doesn't clear cash\n");

    ExFreePool(a);
    ExFreePool(name);
    ExFreePool(l_name);
    ExFreePool(s_name);

    ExFreePool(Tb);
    ExFreePool(T);

    DuplicatesTest();
}
