#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct chkboxproperties {
    HWND winhwnd;
    LPCTSTR chkboxtext;
    int x;
    int y; 
    int width; 
    int height;
};

struct chkboxproperties chkboxprots;

void swapi_createcheckbox(HWND winhwnd, LPCTSTR chkboxtext, int x, int y, int width, int height){
    chkboxprots.winhwnd = winhwnd;
    chkboxprots.chkboxtext = chkboxtext;
    chkboxprots.x = x;
    chkboxprots.y = y;
    chkboxprots.width = width;
    chkboxprots.height = height;
}

int chkboxevntcount = 0;

HWND chkboxhwnd[1000000];
void *chkboxfuncs[1000000];
char *chkboxeventtype[1000000];

void swapi_setchkboxevent(HWND hwnd, void(*func)(), char *eventtype){
    chkboxhwnd[chkboxevntcount] = hwnd;
    chkboxfuncs[chkboxevntcount] = func;
    chkboxeventtype[chkboxevntcount] = (char *) malloc(sizeof(char)*strlen(eventtype));
    strcpy(chkboxeventtype[chkboxevntcount], eventtype);
    chkboxevntcount++;
}

int chkboxelemcount = 1;

HWND swapi_showcheckbox(){
    chkboxelemcount++;
    HWND hwnd = CreateWindow("BUTTON", chkboxprots.chkboxtext, WS_VISIBLE | WS_CHILD | BS_CHECKBOX, chkboxprots.x, chkboxprots.y, chkboxprots.width, chkboxprots.height, chkboxprots.winhwnd, (HMENU) chkboxelemcount, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}