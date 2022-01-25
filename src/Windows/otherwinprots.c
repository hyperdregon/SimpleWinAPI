#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>
#include <CommCtrl.h>

//NOT WORKING, STILL WORKING ON IT 

void swapi_changefont(HWND winhwnd){
    INITCOMMONCONTROLSEX icc;
    
    icc.dwSize = sizeof(icc);
    icc.dwICC = ICC_WIN95_CLASSES;
    InitCommonControlsEx(&icc);
}