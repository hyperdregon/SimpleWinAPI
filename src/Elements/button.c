#include <stdio.h>
#include <stdlib.h>
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

void swapi_createbutton(HWND winhwnd, LPCTSTR btntext, int x, int y, int width, int height){
    btnprots.winhwnd = winhwnd;
    btnprots.btntext = btntext;
    btnprots.x = x;
    btnprots.y = y;
    btnprots.width = width;
    btnprots.height = height;
}

int btnevntcount = 0;

HWND btnhwnd[1000000];
void *btnfuncs[1000000];
char *btneventtype[1000000];

void swapi_setbtnevent(HWND hwnd, void(*func)(), char *eventtype){
    btnhwnd[btnevntcount] = hwnd;
    btnfuncs[btnevntcount] = func;
    btneventtype[btnevntcount] = (char *) malloc(sizeof(char)*strlen(eventtype));
    strcpy(btneventtype[btnevntcount], eventtype);
    btnevntcount++;
}

HWND swapi_showbutton(){
    HWND hwnd = CreateWindow("BUTTON", btnprots.btntext, WS_VISIBLE | WS_CHILD, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, (HMENU) 1, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}