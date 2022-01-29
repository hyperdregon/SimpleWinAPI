#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct cmbboxproperties {
    HWND winhwnd;
    int x;
    int y; 
    int width; 
    int height;
};

struct cmbboxproperties cmbboxprots;

void swapi_createcombobox(HWND winhwnd, int x, int y, int height, int width){
    cmbboxprots.winhwnd = winhwnd;
    cmbboxprots.x = x;
    cmbboxprots.y = y;
    cmbboxprots.height = height;
    cmbboxprots.width = width;
}

HWND cmbboxhwnd[1000000];
void *cmbboxfuncs[1000000];

void swapi_setcmbboxevent(HWND hwnd, void(*func)()){
    cmbboxhwnd[hwndevntcount] = hwnd;
    cmbboxfuncs[hwndevntcount] = func;
    hwndevntcount++;
}

HWND swapi_showcombobox(){
    hwndelemcount++;
    HWND hwnd = CreateWindow("COMBOBOX", "combobox", WS_VISIBLE | WS_CHILD | CBS_DROPDOWN, cmbboxprots.x, cmbboxprots.y, cmbboxprots.width, cmbboxprots.height, cmbboxprots.winhwnd, (HMENU) hwndelemcount, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}

void swapi_createchkboxopt(HWND hwnd, LPCSTR optname){
    SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM) optname);
}