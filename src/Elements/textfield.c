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
};
struct txtfldproperties txtfldprots;

void swapi_addtextfield(HWND winhwnd, LPCTSTR txtfldtext, int x, int y, int width, int height){
    txtfldprots.winhwnd = winhwnd;
    txtfldprots.txtfldtext = txtfldtext;
    txtfldprots.x = x;
    txtfldprots.y = y;
    txtfldprots.width = width;
    txtfldprots.height = height;
}

int txtfldcount = 0;

HWND txtfldhwnd[1000000];
void *txtfldfuncs[1000000];

void swapi_addtxtfldevent(HWND hwnd, void(*func)()){
    txtfldhwnd[txtfldcount] = hwnd;
    txtfldfuncs[txtfldcount] = func;
    txtfldcount++;
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
    HWND hwnd = CreateWindow("EDIT", txtfldprots.txtfldtext, WS_VISIBLE | WS_CHILD, txtfldprots.x, txtfldprots.y, txtfldprots.width, txtfldprots.height, txtfldprots.winhwnd, (HMENU) 1, NULL, NULL);
    return hwnd;
}