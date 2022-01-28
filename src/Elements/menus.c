#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

HMENU hmenu;
HMENU hsubmenu;

void swapi_initmenu(){
    hmenu = CreateMenu();
}

void swapi_initsubmenu(){
    hsubmenu = CreateMenu();
}

int swapi_createsubmnoption(char *option){
    hwndelemcount++;
    AppendMenu(hsubmenu, MF_STRING, hwndelemcount, option);
    return hwndelemcount;
}

void *submnoptsfuncs[1000000];

void swapi_setsubmnoptevent(int mnoptnum, void(*func)()){
    submnoptsfuncs[mnoptnum-1] = func;
    hwndevntcount++;
}

void swapi_createsubmnseparator(){
    AppendMenu(hsubmenu, MF_SEPARATOR, (UINT_PTR) NULL, NULL);
}

void swapi_createsubmenu(char *name){
    AppendMenu(hmenu, MF_POPUP, (UINT_PTR) hsubmenu, name);
}

void swapi_showmenu(HWND winhwnd){
    SetMenu(winhwnd, hmenu);
}