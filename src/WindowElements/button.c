#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <swapi.h>

HWND hwnd;

struct btnproperties {
    HWND winhwnd;
    LPCWSTR classname;
    LPCWSTR btnname;
    int x;
    int y; 
    int width; 
    int height;
};

struct btnproperties btnprots;

void swapi_addcmdbutton(HWND winhwnd, LPCWSTR classname, LPCWSTR btnname, int x, int y, int width, int height){
    btnprots.winhwnd = winhwnd;
    btnprots.classname = classname;
    btnprots.btnname = btnname;
    btnprots.x = x;
    btnprots.y = y;
    btnprots.width = width;
    btnprots.height = height;
}

void swapi_showbutton(){
    HWND hwnd = CreateWindow(btnprots.classname, btnprots.btnname, WS_VISIBLE | WS_CHILD, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, (HMENU) 1, NULL, NULL);
}