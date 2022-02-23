#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"
#include "privswapi.h"

struct btnproperties {
    HWND winhwnd;
    LPCSTR btntext;
    int x;
    int y; 
    int width; 
    int height;
};

struct btnproperties btnprots;

void swapi_createbutton(HWND winhwnd, LPCSTR btntext, int x, int y, int width, int height){
    btnprots.winhwnd = winhwnd;
    btnprots.btntext = btntext;
    btnprots.x = x;
    btnprots.y = y;
    btnprots.width = width;
    btnprots.height = height;
}

HWND btnhwnd[1000000];
void *btnfuncs[1000000];
char *btneventtype[1000000];

void swapi_setbtnevent(HWND hwnd, void(*func)(), char *eventtype){
    btnhwnd[hwndevntcount] = hwnd;
    btnfuncs[hwndevntcount] = func;
    btneventtype[hwndevntcount] = (char *) malloc(sizeof(char)*strlen(eventtype));
    strcpy(btneventtype[hwndevntcount], eventtype);
    hwndevntcount++;
}

void swapi_addimgtobtn(HWND hwnd, LPCSTR imgpath){
    HANDLE hBmp = (HBITMAP)LoadImage(GetModuleHandle(NULL), imgpath, IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);
    SendMessage((HWND)hwnd, (UINT)BM_SETIMAGE, (WPARAM)IMAGE_BITMAP, (LPARAM)hBmp);
}

HWND swapi_showbutton(){
    hwndelemcount++;
    HWND hwnd = CreateWindow("BUTTON", btnprots.btntext, WS_VISIBLE | WS_CHILD | BS_BITMAP | BS_PUSHBUTTON, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, NULL, hInstancecp, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}