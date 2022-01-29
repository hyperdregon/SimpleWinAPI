#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct chkboxproperties {
    HWND winhwnd;
    LPCSTR chkboxtext;
    int x;
    int y; 
};

struct chkboxproperties chkboxprots;

void swapi_createcheckbox(HWND winhwnd, LPCSTR chkboxtext, int x, int y){
    chkboxprots.winhwnd = winhwnd;
    chkboxprots.chkboxtext = chkboxtext;
    chkboxprots.x = x;
    chkboxprots.y = y;
}

HWND chkboxhwnd[1000000];
void *chkboxfuncs[1000000];
char *chkboxeventtype[1000000];

void swapi_setchkboxevent(HWND hwnd, void(*func)(), char *eventtype){
    chkboxhwnd[hwndevntcount] = hwnd;
    chkboxfuncs[hwndevntcount] = func;
    chkboxeventtype[hwndevntcount] = (char *) malloc(sizeof(char)*strlen(eventtype));
    strcpy(chkboxeventtype[hwndevntcount], eventtype);
    hwndevntcount++;
}

HWND swapi_showcheckbox(){
    hwndelemcount++;
    int numofchar = strlen(chkboxprots.chkboxtext);
    int numofnewlines = 0;
    for(int i = 0; chkboxprots.chkboxtext[i] != '\0'; i++){
        if(chkboxprots.chkboxtext[i] == '\n') numofnewlines++;
    }
    numofnewlines++;
    HWND hwnd = CreateWindow("BUTTON", chkboxprots.chkboxtext, WS_VISIBLE | WS_CHILD | BS_CHECKBOX, chkboxprots.x, chkboxprots.y, numofchar*10, numofnewlines*20, chkboxprots.winhwnd, (HMENU) hwndelemcount, NULL, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}

int swapi_getvalueofchkbox(HWND hwnd){
    int num = 0;
    for(int i = 0; i <= hwndevntcount; i++){
        if(chkboxhwnd[i] == hwnd){
            num = i;
            num+=2;
            break;
        }
    }
    return num;
}