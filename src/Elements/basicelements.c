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

char *typecp;
HBITMAP image;

void swapi_addbselement(HWND winhwnd, LPCTSTR elemtext, int x, int y, int width, int height, char *type, LPCWSTR path){
    bselemprots.winhwnd = winhwnd;
    bselemprots.bselemtext = elemtext;
    bselemprots.x = x;
    bselemprots.y = y;
    bselemprots.width = width;
    bselemprots.height = height;
    typecp = (char *) malloc(sizeof(char)*(strlen(type)+1));
    strcpy(typecp, type);
    if(strcmp(type, "image") == 0) image = (HBITMAP) LoadImageW(NULL, path, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
}

int bselemcount = 0;

HWND bselemhwnd[1000000];
void *bselemfuncs[1000000];

void swapi_addbselemevent(HWND hwnd, void(*func)()){
    bselemhwnd[bselemcount] = hwnd;
    bselemfuncs[bselemcount] = func;
    bselemcount++;
}

HWND swapi_showbselement(){
    HWND hwnd;
    if(strcmp(typecp, "button") == 0) hwnd = CreateWindow("BUTTON", bselemprots.bselemtext, WS_VISIBLE | WS_CHILD, bselemprots.x, bselemprots.y, bselemprots.width, bselemprots.height, bselemprots.winhwnd, (HMENU) 1, NULL, NULL);
    else if(strcmp(typecp, "textfield") == 0) hwnd = CreateWindow("EDIT", bselemprots.bselemtext, WS_VISIBLE | WS_CHILD | WS_BORDER, bselemprots.x, bselemprots.y, bselemprots.width, bselemprots.height, bselemprots.winhwnd, NULL, NULL, NULL);
    else if(strcmp(typecp, "image") == 0) hwnd = CreateWindow("Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, bselemprots.x, bselemprots.y, bselemprots.width, bselemprots.height, bselemprots.winhwnd, NULL, NULL, NULL);
    return hwnd;
}

void swapi_destroybselement(HWND hwnd){
    DestroyWindow(hwnd);
}