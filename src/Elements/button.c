#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>
#include <Uxtheme.h>

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

int btncount = 0;

HWND btnhwnd[1000000];
void *btnfuncs[1000000];
char *btneventtype[1000000];

void swapi_createbtnevent(HWND hwnd, void(*func)(), char *eventtype){
    btnhwnd[btncount] = hwnd;
    btnfuncs[btncount] = func;
    btneventtype[btncount] = (char *) malloc(sizeof(char)*strlen(eventtype));
    strcpy(btneventtype[btncount], eventtype);
    btncount++;
}

HWND swapi_showbutton(){
    HWND hwnd = CreateWindow("BUTTON", btnprots.btntext, WS_VISIBLE | WS_CHILD, btnprots.x, btnprots.y, btnprots.width, btnprots.height, btnprots.winhwnd, (HMENU) 1, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    SetWindowTheme(hwnd, L"Explorer", NULL);
    return hwnd;
}