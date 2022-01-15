#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

struct msgboxprops {
    HWND winhwnd; 
    LPCTSTR msgboxtext;
    LPCTSTR msgboxname;
    UINT msgboxtype;
};

struct msgboxprops msgboxprops;

void swapi_createmsgbox(HWND winhwnd, LPCTSTR msgboxtext, LPCTSTR msgboxname, UINT msgboxtype){
    msgboxprops.winhwnd = winhwnd;
    msgboxprops.msgboxtext = msgboxtext;
    msgboxprops.msgboxname = msgboxname;
    msgboxprops.msgboxtype = msgboxtype;
}

int swapi_showmsgbox(){
    int returncode = MessageBox(msgboxprops.winhwnd, msgboxprops.msgboxtext, msgboxprops.msgboxname, msgboxprops.msgboxtype);
    return returncode;
}