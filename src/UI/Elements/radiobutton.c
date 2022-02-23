#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"
#include "privswapi.h"

struct rdiobtnproperties {
    HWND winhwnd;
    LPCSTR rdiobtntext;
    int x;
    int y; 
};

struct rdiobtnproperties rdiobtnprots;

void swapi_createradiobutton(HWND winhwnd, LPCSTR rdiobtntext, int x, int y){
    rdiobtnprots.winhwnd = winhwnd;
    rdiobtnprots.rdiobtntext = rdiobtntext;
    rdiobtnprots.x = x;
    rdiobtnprots.y = y;
}

HWND rdiobtnhwnd[1000000];
void *rdiobtnfuncs[1000000];

void swapi_setrdiobtnevent(HWND hwnd, void(*func)()){
    rdiobtnhwnd[hwndevntcount] = hwnd;
    rdiobtnfuncs[hwndevntcount] = func;
    hwndevntcount++;
}

HWND swapi_showradiobutton(){
    hwndelemcount++;
    int numofchar = strlen(rdiobtnprots.rdiobtntext);
    int numofnewlines = 0;
    for(int i = 0; rdiobtnprots.rdiobtntext[i] != '\0'; i++){
        if(rdiobtnprots.rdiobtntext[i] == '\n') numofnewlines++;
    }
    numofnewlines++;
    HWND hwnd = CreateWindow("BUTTON", rdiobtnprots.rdiobtntext, WS_VISIBLE | WS_CHILD | BS_RADIOBUTTON, rdiobtnprots.x, rdiobtnprots.y, numofchar*14, numofnewlines*20, rdiobtnprots.winhwnd, (HMENU) hwndelemcount, hInstancecp, NULL);
    SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
    return hwnd;
}

int swapi_getvalueofrdiobtn(HWND hwnd){
    int num = 0;
    for(int i = 0; i <= hwndevntcount; i++){
        if(rdiobtnhwnd[i] == hwnd){
            num = i;
            num+=2;
            break;
        }
    }
    return num;
}