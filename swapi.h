#ifndef SIMPLEWINAPI_H
#define SIMPLEWINAPI_H
#include <windows.h>
#include <commctrl.h>

//WINDOW
extern HFONT hfont;

void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
void swapi_initwindow(LPCWSTR windowname, int positionx, int positiony, int width, int height);
void swapi_changestyle(DWORD newstyle);
void swapi_changecursor(char *name);
void swapi_changeicon(char *name);
void swapi_setwindowevent(char *windowevent, void (*func)());
HWND swapi_createwindow();
void swapi_showwindow();

//GENERALHWNDFUNCS
void swapi_destroyhwnd(HWND hwnd);
void swapi_enablehwnd(HWND hwnd, BOOL enable);

//BUTTON
extern HWND btnhwnd[];
extern void *btnfuncs[];
extern char *btneventtype[];

void swapi_createbutton(HWND winhwnd, LPCTSTR btntext, int x, int y, int width, int height);
void swapi_setbtnevent(HWND hwnd, void(*func)(), char *eventtype);
HWND swapi_showbutton();

//IMAGE
extern HWND imghwnd[];
extern void *imgfuncs[];

void swapi_createimage(HWND winhwnd, int x, int y, int width, int height, LPCWSTR path);
HWND swapi_showimage();

//TEXTFIELD
extern HWND txtfldhwnd[];
extern void *txtfldfuncs[];

void swapi_createtextfield(HWND winhwnd, LPCTSTR txtfldtext, int x, int y, int width, int height, int multiline);
void swapi_settxtfldevent(HWND hwnd, void(*func)());
HWND swapi_showtextfield();
LPTSTR swapi_gettxtfldtext(HWND hwnd, int txtsizelimit);
void swapi_settxtfldtext(HWND hwnd, char *text);

//MENUS
extern void *submnoptsfuncs[];

void swapi_initmenu();
void swapi_initsubmenu();
int swapi_createsubmnoption(char *option);
void swapi_createsubmnoptevent(int mnoptnum, void(*func)());
void swapi_createsubmenu(char *name);
void swapi_showmenu(HWND winhwnd);
void swapi_createsubmnseparator();

//MESSAGEBOX
void swapi_createmsgbox(HWND winhwnd, LPCTSTR msgboxtext, LPCTSTR msgboxname, UINT msgboxtype);
int swapi_showmsgbox();

//OPENSAVEFILEWND
void swapi_createfilepopup(HWND winhwnd, int fnamelength, LPCTSTR filefilter);
char *swapi_showfilepopup(int savefile);

//TEXT
void swapi_createtext(HWND winhwnd, LPCSTR text, int x, int y, int width, int height);
HWND swapi_showtext();

//CHECKBOX
extern void *chkboxfuncs[];
extern char *chkboxeventtype[];
extern int chkboxelemcount;

void swapi_createcheckbox(HWND winhwnd, LPCTSTR chkboxtext, int x, int y, int width, int height);
void swapi_setchkboxevent(HWND hwnd, void(*func)(), char *eventtype);
HWND swapi_showcheckbox();

#endif