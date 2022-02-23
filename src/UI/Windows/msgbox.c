#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"

struct msgboxprops {
    HWND winhwnd; 
    LPCSTR msgboxtext;
    LPCSTR msgboxname;
    UINT msgboxtype;
};

struct msgboxprops msgboxprops;

void swapi_createmsgbox(HWND winhwnd, LPCSTR msgboxtext, LPCSTR msgboxname, UINT msgboxtype){
    msgboxprops.winhwnd = winhwnd;
    msgboxprops.msgboxtext = msgboxtext;
    msgboxprops.msgboxname = msgboxname;
    msgboxprops.msgboxtype = msgboxtype;
}

int swapi_showmsgbox(){
    int returncode = MessageBox(msgboxprops.winhwnd, msgboxprops.msgboxtext, msgboxprops.msgboxname, msgboxprops.msgboxtype);
    return returncode;
}