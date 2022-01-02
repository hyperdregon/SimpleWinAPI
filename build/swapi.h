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
void swapi_showwindow(void (*func)());
void swapi_destroywindow();

//BUTTON
void swapi_addbutton(HWND winhwnd);

#endif