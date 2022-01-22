#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

void swapi_destroyhwnd(HWND hwnd){
    DestroyWindow(hwnd);
}

void swapi_enablehwnd(HWND hwnd, BOOL enable){
    EnableWindow(hwnd, enable);
}