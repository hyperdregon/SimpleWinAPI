#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

int hwndelemcount = 1;
int hwndevntcount = 0;

void swapi_destroyhwnd(HWND hwnd){
    DestroyWindow(hwnd);
}

void swapi_checkhwnd(HWND winhwnd, int hwndvalue, int check){
    if(check == 0) CheckDlgButton(winhwnd, hwndvalue, BST_UNCHECKED);
    else if(check == 1) CheckDlgButton(winhwnd, hwndvalue, BST_CHECKED);
}

void swapi_enablehwnd(HWND hwnd, BOOL enable){
    EnableWindow(hwnd, enable);
}