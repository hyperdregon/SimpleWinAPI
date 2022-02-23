#ifndef SIMPLEWINAPI_H
#define SIMPLEWINAPI_H
#include <windows.h>
#include <commctrl.h>
#include <Uxtheme.h>

//API
void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

//WINDOW
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
void swapi_checkhwnd(HWND winhwnd, int hwndvalue, BOOL check);
void swapi_showhidehwnd(HWND hwnd, BOOL show);
void swapi_sethwndtext(HWND hwnd, LPCSTR text);
LPTSTR swapi_gethwndtext(HWND hwnd);

//BUTTON
void swapi_createbutton(HWND winhwnd, LPCSTR btntext, int x, int y, int width, int height);
void swapi_setbtnevent(HWND hwnd, void(*func)(), char *eventtype);
void swapi_addimgtobtn(HWND hwnd, LPCSTR imgpath);
HWND swapi_showbutton();

//IMAGE
void swapi_createimage(HWND winhwnd, int x, int y, int width, int height, LPCWSTR path);
HWND swapi_showimage();

//TEXTFIELD
void swapi_createtextfield(HWND winhwnd, LPCSTR txtfldtext, int x, int y, int width, int height, BOOL multiline);
void swapi_settxtfldevent(HWND hwnd, void(*func)());
HWND swapi_showtextfield();

//MENUS
void swapi_initmenu();
void swapi_initsubmenu();
int swapi_createsubmnoption(char *option);
void swapi_setsubmnoptevent(int mnoptnum, void(*func)());
void swapi_createsubmenu(char *name);
void swapi_showmenu(HWND winhwnd);
void swapi_createsubmnseparator();

//MESSAGEBOX
void swapi_createmsgbox(HWND winhwnd, LPCSTR msgboxtext, LPCSTR msgboxname, UINT msgboxtype);
int swapi_showmsgbox();

//OPENSAVEFILEWND
void swapi_createfilepopup(HWND winhwnd, int fnamelength, LPCSTR filefilter);
char *swapi_showfilepopup(BOOL savefile);

//TEXT
void swapi_createtext(HWND winhwnd, LPCSTR text, int x, int y);
HWND swapi_showtext();

//CHECKBOX
void swapi_createcheckbox(HWND winhwnd, LPCSTR chkboxtext, int x, int y);
void swapi_setchkboxevent(HWND hwnd, void(*func)(), char *eventtype);
HWND swapi_showcheckbox();
int swapi_getvalueofchkbox(HWND hwnd);

//RADIOBUTTON
void swapi_createradiobutton(HWND winhwnd, LPCSTR rdiobtntext, int x, int y);
void swapi_setrdiobtnevent(HWND hwnd, void(*func)());
HWND swapi_showradiobutton();
int swapi_getvalueofrdiobtn(HWND hwnd);

//COMBOBOX
void swapi_createcombobox(HWND winhwnd, int x, int y, int height, int width);
void swapi_setcmbboxevent(HWND hwnd, void(*func)());
HWND swapi_showcombobox();
void swapi_createchkboxopt(HWND hwnd, LPCSTR optname);

//FILES
void swapi_createfile(LPCSTR path, BOOL directory);
void swapi_hidefile(LPCSTR path);
BOOL swapi_checkiffileexists(LPCSTR path);

//PATHS
char *swapi_getexecpath();
char *swapi_getpathoffolderofexec();

#endif