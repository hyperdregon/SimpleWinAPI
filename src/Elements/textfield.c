#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct txtfldproperties {
    HWND winhwnd;
    LPCTSTR txtfldtext;
    int x;
    int y; 
    int width; 
    int height;
    int multiline;
};
struct txtfldproperties txtfldprots;

void swapi_createtextfield(HWND winhwnd, LPCTSTR txtfldtext, int x, int y, int width, int height, int multiline){
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

LPTSTR swapi_gettxtfldtext(HWND hwnd, int txtsizelimit){
    LPTSTR text = (LPTSTR) malloc(sizeof(LPTSTR)*txtsizelimit);
    GetWindowText(hwnd, text, txtsizelimit);
    return text;
}

void swapi_settxtfldtext(HWND hwnd, char *text){
    SetWindowText(hwnd, text);
}

HWND swapi_showtextfield(){
    HWND hwnd;
    if(txtfldprots.multiline == 0)
        hwnd = CreateWindow("EDIT", txtfldprots.txtfldtext, WS_VISIBLE | WS_CHILD, txtfldprots.x, txtfldprots.y, txtfldprots.width, txtfldprots.height, txtfldprots.winhwnd, NULL, NULL, NULL);
    else if(txtfldprots.multiline == 1)
        hwnd = CreateWindow("EDIT", txtfldprots.txtfldtext, WS_VISIBLE | WS_CHILD | ES_MULTILINE | WS_VSCROLL | WS_HSCROLL, txtfldprots.x, txtfldprots.y, txtfldprots.width, txtfldprots.height, txtfldprots.winhwnd, NULL, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}