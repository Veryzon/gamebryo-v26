// EMERGENT GAME TECHNOLOGIES PROPRIETARY INFORMATION
//
// This software is supplied under the terms of a license agreement or
// nondisclosure agreement with Emergent Game Technologies and may not
// be copied or disclosed except in accordance with the terms of that
// agreement.
//
//      Copyright (c) 1996-2008 Emergent Game Technologies.
//      All Rights Reserved.
//
// Emergent Game Technologies, Chapel Hill, North Carolina 27517
// http://www.emergent.net

#ifndef NIDLGPROCVIEWERLOADER_H
#define NIDLGPROCVIEWERLOADER_H


//---------------------------------------------------------------------------
static BOOL CALLBACK ExportOptionsDlgProc(HWND hDlg, UINT message,
    WPARAM wParam, LPARAM lParam) 
{
    switch(message) 
    {
        case WM_INITDIALOG:
        {
            return FALSE;
        }
        case WM_COMMAND:
            return TRUE;
    }
    return FALSE;
}
#endif

