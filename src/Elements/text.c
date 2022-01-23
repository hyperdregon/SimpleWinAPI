#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>
#include <wingdi.h>

struct textproperties {
    HDC hdc;
    LPCSTR text;
    HWND winhwnd;
    int x;
    int y;
    int width;
    int height;
};

struct textproperties textprots;

void swapi_createtext(HWND winhwnd, LPCSTR text, int x, int y, int width, int height){
    textprots.text = text;
    textprots.winhwnd = winhwnd;
    textprots.x = x;
    textprots.y = y;
    textprots.width = width;
    textprots.height = height;
}

HWND swapi_showtext(){
    HWND hwnd = CreateWindow("STATIC", textprots.text, WS_VISIBLE | WS_CHILD, textprots.x, textprots.y, textprots.width, textprots.height, textprots.winhwnd, NULL, NULL, NULL);
    return hwnd;
}