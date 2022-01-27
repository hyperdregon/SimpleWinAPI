#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct textproperties {
    HDC hdc;
    LPCSTR text;
    HWND winhwnd;
    int x;
    int y;
};

struct textproperties textprots;

void swapi_createtext(HWND winhwnd, LPCSTR text, int x, int y){
    textprots.text = text;
    textprots.winhwnd = winhwnd;
    textprots.x = x;
    textprots.y = y;
}

HWND swapi_showtext(){
    int numofchar = strlen(textprots.text);
    int numofnewlines = 0;
    for(int i = 0; textprots.text[i] != '\0'; i++){
        if(textprots.text[i] == '\n') numofnewlines++;
    }
    numofnewlines++;
    HWND hwnd = CreateWindow("STATIC", textprots.text, WS_VISIBLE | WS_CHILD, textprots.x, textprots.y, numofchar*10, numofnewlines*20, textprots.winhwnd, NULL, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}