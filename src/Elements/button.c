#include <stdio.h>
#include <stdlib.h>
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

HWND swapi_showbutton(){
    hwndelemcount++;
    HWND hwnd = CreateWindow("BUTTON", btnprots.btntext, WS_VISIBLE | WS_CHILD, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, NULL, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}