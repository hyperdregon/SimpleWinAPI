#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

int catgrycount = 1;

HMENU hmenu;
HMENU hsubmenu;

void swapi_initmenu(){
    hmenu = CreateMenu();
}

void swapi_initsubmenu(){
    hsubmenu = CreateMenu();
}

int swapi_createsubmnoption(char *option){
    AppendMenu(hsubmenu, MF_STRING, catgrycount, option);
    catgrycount++;
    return catgrycount-1;
}

int submnoptscount = 0;

void *submnoptsfuncs[1000];

void swapi_createsubmnoptevent(int mnoptnum, void(*func)()){
    submnoptsfuncs[mnoptnum-1] = func;
    submnoptscount++;
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