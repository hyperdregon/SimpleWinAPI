#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>
#include <WinUser.h>

//NOT WORKING, STILL WORKING ON IT 

NONCLIENTMETRICS ncm;

void swapi_changefont(HWND winhwnd){
    ncm.cbSize = sizeof(NONCLIENTMETRICS);
    SystemParametersInfo(SPI_GETNONCLIENTMETRICS, sizeof(NONCLIENTMETRICS), &ncm, 0);
    HFONT hFont = CreateFontIndirect(&ncm.lfMessageFont);
    SendMessage(winhwnd, WM_SETFONT, (WPARAM)hFont, MAKELPARAM(TRUE, 0));
}