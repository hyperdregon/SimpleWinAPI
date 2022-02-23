#ifndef PRIVSWAPI_H
#define PRIVSWAPI_H
#include <windows.h>

//API
extern HINSTANCE hInstancecp;
extern HINSTANCE hPrevInstancecp; 
extern LPSTR lpCmdLinecp; 
extern int nCmdShowcp;

//WINDOW
extern HFONT hfont;

//GENERALHWNDFUNCS
extern int hwndelemcount;
extern int hwndevntcount;

//BUTTON
extern HWND btnhwnd[];
extern void *btnfuncs[];
extern char *btneventtype[];

//IMAGE
extern HWND imghwnd[];
extern void *imgfuncs[];

//TEXTFIELD
extern HWND txtfldhwnd[];
extern void *txtfldfuncs[];

//MENUS
extern void *submnoptsfuncs[];

//CHECKBOX
extern HWND chkboxhwnd[];
extern void *chkboxfuncs[];
extern char *chkboxeventtype[];

//RADIOBUTTON
extern void *rdiobtnfuncs[];
extern HWND rdiobtnhwnd[];

//COMBOBOX
extern HWND cmbboxhwnd[];
extern void *cmbboxfuncs[];

void chkelemsevnts(LPARAM lParam, WPARAM wParam, HWND hwnd);

#endif