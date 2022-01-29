#ifndef SIMPLEWINAPI_H
#define SIMPLEWINAPI_H
#include <windows.h>
#include <commctrl.h>
#include <Uxtheme.h>

//WINDOW
extern HFONT hfont;

void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
void swapi_initwindow(LPCWSTR windowname, int positionx, int positiony, int width, int height);
void swapi_changestyle(DWORD newstyle);
void swapi_changecursor(char *name);
void swapi_changeicon(char *name);
void swapi_setwindowevent(char *windowevent, void (*func)());
HWND swapi_createwindow();
void swapi_changewindowtitle(HWND hwnd, LPCWSTR name);
void swapi_showwindow();

//GENERALHWNDFUNCS
extern int hwndelemcount;
extern int hwndevntcount;

void swapi_destroyhwnd(HWND hwnd);
void swapi_enablehwnd(HWND hwnd, BOOL enable);
void swapi_checkhwnd(HWND winhwnd, int hwndvalue, int check);
void swapi_showhidehwnd(HWND hwnd, BOOL show);

//BUTTON
extern HWND btnhwnd[];
extern void *btnfuncs[];
extern char *btneventtype[];

void swapi_createbutton(HWND winhwnd, LPCSTR btntext, int x, int y, int width, int height);
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

void swapi_createtextfield(HWND winhwnd, LPCSTR txtfldtext, int x, int y, int width, int height, int multiline);
void swapi_settxtfldevent(HWND hwnd, void(*func)());
HWND swapi_showtextfield();
LPTSTR swapi_gettxtfldtext(HWND hwnd, int txtsizelimit);
void swapi_settxtfldtext(HWND hwnd, char *text);

//MENUS
extern void *submnoptsfuncs[];

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
char *swapi_showfilepopup(int savefile);

//TEXT
void swapi_createtext(HWND winhwnd, LPCSTR text, int x, int y);
HWND swapi_showtext();

//CHECKBOX
extern HWND chkboxhwnd[];
extern void *chkboxfuncs[];
extern char *chkboxeventtype[];

void swapi_createcheckbox(HWND winhwnd, LPCSTR chkboxtext, int x, int y);
void swapi_setchkboxevent(HWND hwnd, void(*func)(), char *eventtype);
HWND swapi_showcheckbox();
int swapi_getvalueofchkbox(HWND hwnd);

//RADIOBUTTON
extern void *rdiobtnfuncs[];
extern HWND rdiobtnhwnd[];

void swapi_createradiobutton(HWND winhwnd, LPCSTR rdiobtntext, int x, int y);
void swapi_setrdiobtnevent(HWND hwnd, void(*func)());
HWND swapi_showradiobutton();
int swapi_getvalueofrdiobtn(HWND hwnd);

//COMBOBOX
extern HWND cmbboxhwnd[];
extern void *cmbboxfuncs[];

void swapi_createcombobox(HWND winhwnd, int x, int y, int height, int width);
void swapi_setcmbboxevent(HWND hwnd, void(*func)());
HWND swapi_showcombobox();
void swapi_createchkboxopt(HWND hwnd, LPCSTR optname);

#endif