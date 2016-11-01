#include <ntddk.h>

VOID
DriverUnload(PDRIVER_OBJECT pDriverObject)
{
    DbgPrint("Test driver unloaded successfully\n");
}

NTSTATUS
DriverEntry(PDRIVER_OBJECT DriverObject,
            PUNICODE_STRING RegistryPath)
{
    DriverObject->DriverUnload = DriverUnload;

    DbgPrint("Test driver loaded successfully\n");

    return STATUS_SUCCESS;
}