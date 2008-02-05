/*
 * PROJECT:     ReactOS VGA Font Editor
 * LICENSE:     GNU General Public License Version 2.0 or any later version
 * FILE:        devutils/vgafontedit/precomp.h
 * PURPOSE:     Main header
 * COPYRIGHT:   Copyright 2008 Colin Finck <mail@colinfinck.de>
 */

#ifndef __PRECOMP_H
#define __PRECOMP_H

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include "resource.h"
#include "customwndclasses.h"

// Forward declarations
typedef struct _FONT_WND_INFO FONT_WND_INFO, *PFONT_WND_INFO;

// Structure declarations
typedef struct _BITMAP_FONT
{
    UCHAR Bits[2048];
} BITMAP_FONT, *PBITMAP_FONT;

typedef struct _MAIN_WND_INFO
{
    HWND hMainWnd;
    HWND hMdiClient;
    HMENU hMenu;
    HWND hToolbar;
    INT nCmdShow;

    HBITMAP hBoxBmp;
    PFONT_WND_INFO CurrentFontWnd;
    ULONG uDocumentCounter;

    PFONT_WND_INFO FirstFontWnd;
    PFONT_WND_INFO LastFontWnd;
} MAIN_WND_INFO, *PMAIN_WND_INFO;

typedef struct _FONT_OPEN_INFO
{
    BOOL bCreateNew;
    BOOL bBinaryFileOpened;
    BOOL bModified;
    PWSTR pszFileName;
} FONT_OPEN_INFO, *PFONT_OPEN_INFO;

struct _FONT_WND_INFO
{
    PMAIN_WND_INFO MainWndInfo;
    PFONT_OPEN_INFO OpenInfo;
    PBITMAP_FONT Font;

    HWND hSelf;
    HWND hFontBoxesWnd;
    UINT uSelectedCharacter;

    PFONT_WND_INFO PrevFontWnd;
    PFONT_WND_INFO NextFontWnd;
};

typedef struct _EDIT_GLYPH_INFO
{
    PFONT_WND_INFO FontWndInfo;

    UINT uCharacter;
    UCHAR CharacterBits[8];

    HWND hSelf;
    HWND hEdit;
    HWND hPreview;
    LONG lEditSpacing;
} EDIT_GLYPH_INFO, *PEDIT_GLYPH_INFO;

#define ID_MDI_FIRSTCHILD             50000

// Dimensions of the visual elements
#define CHARACTER_INFO_BOX_WIDTH      55
#define CHARACTER_INFO_BOX_HEIGHT     16
#define CHARACTER_BITMAP_BOX_HEIGHT   14
#define CHARACTER_BOX_WIDTH           (CHARACTER_INFO_BOX_WIDTH)
#define CHARACTER_BOX_HEIGHT          (CHARACTER_INFO_BOX_HEIGHT + CHARACTER_BITMAP_BOX_HEIGHT)
#define CHARACTER_BOX_PADDING         5
#define FONT_BOXES_WND_WIDTH          (CHARACTER_BOX_WIDTH * 16 + CHARACTER_BOX_PADDING * 15)
#define FONT_BOXES_WND_HEIGHT         (CHARACTER_BOX_HEIGHT * 16 + CHARACTER_BOX_PADDING * 15)
#define FONT_WND_MIN_WIDTH            (FONT_BOXES_WND_WIDTH + 25)
#define FONT_WND_MIN_HEIGHT           (FONT_BOXES_WND_HEIGHT + GetSystemMetrics(SM_CYCAPTION) + 25)

// Custom return values
#define HITTEST_SEPARATOR             -1

// Custom window messages
#define WM_USER_APPCLOSE              (WM_USER + 1)

// Bitmap numbers
#define TOOLBAR_EDIT_GLYPH            0
#define TOOLBOX_PEN                   0

// PSFv1 file handling
#define PSF1_MAGIC0                   0x36
#define PSF1_MAGIC1                   0x04

typedef struct _PSF1_HEADER
{
    UCHAR uMagic[2];
    UCHAR uMode;
    UCHAR uCharSize;
} PSF1_HEADER, *PPSF1_HEADER;


//
// Function prototypes
//

// aboutdlg.c
INT_PTR CALLBACK AboutDlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// editglyphdlg.c
INT_PTR CALLBACK EditGlyphDlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL InitEditGlyphWndClasses(VOID);
VOID UnInitEditGlyphWndClasses(VOID);

// fontboxeswnd.c
VOID CreateFontBoxesWindow(PFONT_WND_INFO FontWndInfo);
BOOL InitFontBoxesWndClass(VOID);
VOID UnInitFontBoxesWndClass(VOID);
VOID GetCharacterRect(IN UINT uFontRow, IN UINT uFontColumn, OUT LPRECT CharacterRect);
__inline VOID GetCharacterPosition(IN UINT uCharacter, OUT PUINT uFontRow, OUT PUINT uFontColumn);
VOID EditCurrentGlyph(PFONT_WND_INFO FontWndInfo);

// fontwnd.c
BOOL CreateFontWindow(PMAIN_WND_INFO MainWndInfo, PFONT_OPEN_INFO OpenInfo);
BOOL InitFontWndClass(VOID);
VOID UnInitFontWndClass(VOID);

// main.c
extern PWSTR szAppName;
extern HINSTANCE hInstance;
extern HANDLE hProcessHeap;

// mainwnd.c
BOOL CreateMainWindow(IN INT nCmdShow, OUT PMAIN_WND_INFO* Info);
BOOL InitMainWndClass(VOID);
VOID UnInitMainWndClass(VOID);
VOID DoFileSave(IN PMAIN_WND_INFO Info, IN BOOL bSaveAs);
VOID SetToolbarFileButtonState(IN PMAIN_WND_INFO Info, BOOL bEnabled);

// misc.c
INT AllocAndLoadString(OUT PWSTR *lpTarget, IN UINT uID);
DWORD LoadAndFormatString(IN UINT uID, OUT PWSTR *lpTarget, ...);
VOID LocalizedError(IN UINT uID, ...);

// opensave.c
VOID FileInitialize(HWND hwnd);
BOOL DoOpenFile(OUT PWSTR pszFileName);
BOOL DoSaveFile(IN PWSTR pszFileName);

#endif
