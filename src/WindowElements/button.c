#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <swapi.h>

struct btnproperties {
    HWND winhwnd;
    LPCSTR btntext;
    int x;
    int y; 
    int width; 
    int height;
};

struct btnproperties btnprots;

void swapi_addcmdbutton(HWND winhwnd, LPCSTR btntext, int x, int y, int width, int height){
    btnprots.winhwnd = winhwnd;
    btnprots.btntext = btntext;
    btnprots.x = x;
    btnprots.y = y;
    btnprots.width = width;
    btnprots.height = height;
}

HWND swapi_showbutton(){
    HWND hwnd = CreateWindow("button", btnprots.btntext, WS_VISIBLE | WS_CHILD, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, (HMENU) 1, NULL, NULL);
    btnprots.winhwnd = NULL;
    btnprots.btntext = NULL;
    btnprots.x = 0;
    btnprots.y = 0;
    btnprots.width = 0;
    btnprots.height = 0;
    return hwnd;
}

void swapi_destroybutton(HWND hwnd){
    DestroyWindow(hwnd);
}