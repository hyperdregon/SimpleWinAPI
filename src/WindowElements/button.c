#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <swapi.h>

struct btnproperties {
    HWND winhwnd;
    LPCTSTR btntext;
    int x;
    int y; 
    int width; 
    int height;
};

struct btnproperties btnprots;

void swapi_addbutton(HWND winhwnd, LPCTSTR btntext, int x, int y, int width, int height){
    btnprots.winhwnd = winhwnd;
    btnprots.btntext = btntext;
    btnprots.x = x;
    btnprots.y = y;
    btnprots.width = width;
    btnprots.height = height;
}

int btncount = 0;
HWND btnhwnd[1000000];
void *funcs[1000000];

void swapi_addbtnevent(HWND hwnd, void(*func)()){
    btnhwnd[btncount] = hwnd;
    funcs[btncount] = func;
    btncount++;
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