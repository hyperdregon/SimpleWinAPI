#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct bselemproperties {
    HWND winhwnd;
    LPCTSTR bselemtext;
    int x;
    int y; 
    int width; 
    int height;
};
struct bselemproperties bselemprots;

void swapi_addbselement(HWND winhwnd, LPCTSTR btntext, int x, int y, int width, int height){
    bselemprots.winhwnd = winhwnd;
    bselemprots.bselemtext = btntext;
    bselemprots.x = x;
    bselemprots.y = y;
    bselemprots.width = width;
    bselemprots.height = height;
}

int bselemcount = 0;

HWND bselemhwnd[1000000];
void *bselemfuncs[1000000];

void swapi_addbselemevent(HWND hwnd, void(*func)()){
    bselemhwnd[bselemcount] = hwnd;
    bselemfuncs[bselemcount] = func;
    bselemcount++;
}

HWND swapi_showbselement(char *type){
    HWND hwnd;
    if(strcmp(type, "button") == 0) hwnd = CreateWindow("BUTTON", bselemprots.bselemtext, WS_VISIBLE | WS_CHILD, bselemprots.x, bselemprots.y, bselemprots.width, bselemprots.height, bselemprots.winhwnd, (HMENU) 1, NULL, NULL);
    else if(strcmp(type, "textfield") == 0) hwnd = CreateWindow("EDIT", bselemprots.bselemtext, WS_VISIBLE | WS_CHILD | WS_BORDER, bselemprots.x, bselemprots.y, bselemprots.width, bselemprots.height, bselemprots.winhwnd, NULL, NULL, NULL);
    return hwnd;
}

void swapi_destroybselement(HWND hwnd){
    DestroyWindow(hwnd);
}