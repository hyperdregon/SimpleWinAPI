#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"
#include "privswapi.h"

int hwndelemcount = 1;
int hwndevntcount = 0;

void swapi_destroyhwnd(HWND hwnd){
    DestroyWindow(hwnd);
}

void swapi_checkhwnd(HWND winhwnd, int hwndvalue, BOOL check){
    if(check == FALSE) CheckDlgButton(winhwnd, hwndvalue, BST_UNCHECKED);
    else if(check == TRUE) CheckDlgButton(winhwnd, hwndvalue, BST_CHECKED);
}

void swapi_enablehwnd(HWND hwnd, BOOL enable){
    EnableWindow(hwnd, enable);
}

void swapi_showhidehwnd(HWND hwnd, BOOL show){
    if(show == FALSE) ShowWindow(hwnd, SW_HIDE);
    else if(show == TRUE) ShowWindow(hwnd, SW_SHOW);
}

void swapi_sethwndtext(HWND hwnd, LPCSTR text){
    SetWindowText(hwnd, text);
}

LPTSTR swapi_gethwndtext(HWND hwnd){
    LPTSTR otext = (LPTSTR) malloc(sizeof(LPTSTR)*100000000);
    GetWindowText(hwnd, otext, 100000000);
    LPTSTR text = (LPTSTR) malloc(sizeof(LPTSTR)*sizeof(otext));
    strcpy(text, otext);
    free(otext);
    return text;
}