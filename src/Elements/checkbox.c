#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct chkboxproperties {
    HWND winhwnd;
    LPCTSTR chkboxtext;
    int x;
    int y; 
};

struct chkboxproperties chkboxprots;

void swapi_createcheckbox(HWND winhwnd, LPCTSTR chkboxtext, int x, int y){
    chkboxprots.winhwnd = winhwnd;
    chkboxprots.chkboxtext = chkboxtext;
    chkboxprots.x = x;
    chkboxprots.y = y;
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
    int numofchar = strlen(chkboxprots.chkboxtext);
    int numofnewlines = 0;
    for(int i = 0; chkboxprots.chkboxtext[i] != '\0'; i++){
        if(chkboxprots.chkboxtext[i] == '\n') numofnewlines++;
    }
    numofnewlines++;
    HWND hwnd = CreateWindow("BUTTON", chkboxprots.chkboxtext, WS_VISIBLE | WS_CHILD | BS_CHECKBOX, chkboxprots.x, chkboxprots.y, numofchar*10, numofnewlines*20, chkboxprots.winhwnd, (HMENU) chkboxelemcount, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}