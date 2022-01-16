#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

OPENFILENAME ofn;

char *filename;

void swapi_createfilepopup(HWND winhwnd, int fnamelength, LPCTSTR filefilter){
    filename = (char *) malloc(sizeof(char)*fnamelength);
    ZeroMemory(&ofn, sizeof(OPENFILENAME));
    
    ofn.lStructSize = sizeof(OPENFILENAME);
    ofn.hwndOwner = winhwnd;
    ofn.lpstrFile = filename;
    ofn.lpstrFile[0] = '\0';
    ofn.nMaxFile = fnamelength;
    ofn.lpstrFilter = filefilter;
    ofn.nFilterIndex = 1;
}

char *swapi_showfilepopup(int savefile){
    if(savefile == 0){
        GetOpenFileName(&ofn);
    }
    else {
        GetSaveFileName(&ofn);
    }
    return filename;
}