#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

void swapi_destroyhwnd(HWND hwnd){
    DestroyWindow(hwnd);
}