#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct txtfldproperties {
    HWND winhwnd;
    LPCSTR txtfldtext;
    int x;
    int y; 
    int width; 
    int height;
    BOOL multiline;
};
struct txtfldproperties txtfldprots;

void swapi_createtextfield(HWND winhwnd, LPCSTR txtfldtext, int x, int y, int width, int height, BOOL multiline){
    txtfldprots.winhwnd = winhwnd;
    txtfldprots.txtfldtext = txtfldtext;
    txtfldprots.x = x;
    txtfldprots.y = y;
    txtfldprots.width = width;
    txtfldprots.height = height;
    txtfldprots.multiline = multiline;
}

HWND txtfldhwnd[1000000];
void *txtfldfuncs[1000000];

void swapi_settxtfldevent(HWND hwnd, void(*func)()){
    txtfldhwnd[hwndevntcount] = hwnd;
    txtfldfuncs[hwndevntcount] = func;
    hwndevntcount++;
}

HWND swapi_showtextfield(){
    HWND hwnd;
    if(txtfldprots.multiline == FALSE)
        hwnd = CreateWindow("EDIT", txtfldprots.txtfldtext, WS_VISIBLE | WS_CHILD, txtfldprots.x, txtfldprots.y, txtfldprots.width, txtfldprots.height, txtfldprots.winhwnd, NULL, NULL, NULL);
    else if(txtfldprots.multiline == TRUE)
        hwnd = CreateWindow("EDIT", txtfldprots.txtfldtext, WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL | WS_HSCROLL, txtfldprots.x, txtfldprots.y, txtfldprots.width, txtfldprots.height, txtfldprots.winhwnd, NULL, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}