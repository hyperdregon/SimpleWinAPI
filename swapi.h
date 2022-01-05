#ifndef SIMPLEWINAPI_H
#define SIMPLEWINAPI_H
#include <windows.h>

//WINDOW
void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
HWND swapi_createwindow(LPCWSTR classname, LPCWSTR windowname, int positionx, int positiony, int width, int height);
void swapi_changestyle(DWORD newstyle);
void swapi_changecursor(char *name);
void swapi_changeicon(char *name);
void swapi_addwindowevent(char *windowevent, void (*func)());
void swapi_showwindow();
void swapi_destroywindow();

//BASICELEMENTS
extern HWND bselemhwnd[];
extern void *bselemfuncs[];

void swapi_addbselement(HWND winhwnd, LPCTSTR elemtext, int x, int y, int width, int height, char *type, LPCWSTR path);
void swapi_addbselemevent(HWND hwnd, void(*func)());
HWND swapi_showbselement();
void swapi_destroybselement(HWND hwnd);

//MENUS
extern void *submnoptsfuncs[];

void swapi_initmenu();
void swapi_initsubmenu();
int swapi_addsubmnoption(char *option);
void swapi_addsubmnoptevent(int mnoptnum, void(*func)());
void swapi_addsubmenu(char *name);
void swapi_showmenu(HWND winhwnd);
void swapi_addsubmnseparator();

#endif