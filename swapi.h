#ifndef SIMPLEWINAPI_H
#define SIMPLEWINAPI_H
#include <windows.h>

//WINDOW
void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
void swapi_initwindow(LPCWSTR windowname, int positionx, int positiony, int width, int height);
void swapi_changestyle(DWORD newstyle);
void swapi_changecursor(char *name);
void swapi_changeicon(char *name);
void swapi_addwindowevent(char *windowevent, void (*func)());
HWND swapi_createwindow();
void swapi_showwindow();
void swapi_destroywindow();

//DESTROYELEM
void swapi_destroyelement(HWND hwnd);

//BUTTON
extern HWND btnhwnd[];
extern void *btnfuncs[];

void swapi_addbutton(HWND winhwnd, LPCTSTR btntext, int x, int y, int width, int height);
void swapi_addbtnevent(HWND hwnd, void(*func)());
HWND swapi_showbutton();

//IMAGE
extern HWND imghwnd[];
extern void *imgfuncs[];

void swapi_addimage(HWND winhwnd, int x, int y, int width, int height, LPCWSTR path);
HWND swapi_showimage();

//TEXTFIELD
extern HWND txtfldhwnd[];
extern void *txtfldfuncs[];

void swapi_addtextfield(HWND winhwnd, LPCTSTR txtfldtext, int x, int y, int width, int height);
void swapi_addtxtfldevent(HWND hwnd, void(*func)());
HWND swapi_showtextfield();
LPTSTR swapi_gettxtfldtext(HWND hwnd, int txtsizelimit);
void swapi_settxtfldtext(HWND hwnd, char *text);

//MENUS
extern void *submnoptsfuncs[];

void swapi_initmenu();
void swapi_initsubmenu();
int swapi_addsubmnoption(char *option);
void swapi_addsubmnoptevent(int mnoptnum, void(*func)());
void swapi_addsubmenu(char *name);
void swapi_showmenu(HWND winhwnd);
void swapi_addsubmnseparator();

//MESSAGEBOX
void swapi_createmsgbox(HWND winhwnd, LPCTSTR msgboxtext, LPCTSTR msgboxname, UINT msgboxtype);
int swapi_showmsgbox();

//OPENSAVEFILEWND
void swapi_createfilepopup(HWND winhwnd, int fnamelength, LPCTSTR filefilter);
char *swapi_showfilepopup(int savefile);

#endif