#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){ return 0; }

void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    hInstancecp = hInstance;
    hPrevInstancecp = hPrevInstance;
    lpCmdLinecp = lpCmdLine;
    nCmdShowcp = nCmdShow;
}

struct wineventfuncs {
    void (*funccp1)();
    void (*funccp2)();
    void (*funccp3)();
    void (*funccp4)();
    void (*funccp5)();
    void (*funccp6)();
    void (*funccp7)();
    void (*funccp8)();
    void (*funccp9)();
    void (*funccp10)();
    void (*funccp11)();
    void (*funccp12)();
    void (*funccp13)();
    void (*funccp14)();
    void (*funccp15)();
    void (*funccp16)();
    void (*funccp17)();
    void (*funccp18)();
    void (*funccp19)();
    void (*funccp20)();
    void (*funccp21)();
    void (*funccp22)();
    void (*funccp23)();
    void (*funccp24)();
    void (*funccp25)();
    void (*funccp26)();
    void (*funccp27)();
    void (*funccp28)();
    void (*funccp29)();
    void (*funccp30)();
    void (*funccp31)();
    void (*funccp32)();
    void (*funccp33)();
    void (*funccp34)();
};

char *windoweventcp;
char *eventfuncswindname;

struct winproperties {
    LPCWSTR windowname; 
    int positionx; 
    int positiony; 
    int width;
    int height;
};

struct winproperties window;
struct wineventfuncs eventfuncs;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if(msg == WM_DESTROY){
        PostQuitMessage(0);
    }
    if(msg == WM_NULL && strstr(windoweventcp, "null")) eventfuncs.funccp1();
    if(msg == WM_CREATE && strstr(windoweventcp, "create")) eventfuncs.funccp2();
    if(msg == WM_MOVE && strstr(windoweventcp, "move")) eventfuncs.funccp4();
    if(msg == WM_SIZE && strstr(windoweventcp, "size")) eventfuncs.funccp5();
    if(msg == WM_ACTIVATE && strstr(windoweventcp, "activate")) eventfuncs.funccp6();
    if(msg == WM_SETFOCUS && strstr(windoweventcp, "setfocus")) eventfuncs.funccp7();
    if(msg == WM_KILLFOCUS && strstr(windoweventcp, "killfocus")) eventfuncs.funccp8();
    if(msg == WM_ENABLE && strstr(windoweventcp, "enable")) eventfuncs.funccp9();
    if(msg == WM_SETREDRAW && strstr(windoweventcp, "setredraw")) eventfuncs.funccp10();
    if(msg == WM_SETTEXT && strstr(windoweventcp, "settext")) eventfuncs.funccp11();
    if(msg == WM_GETTEXT && strstr(windoweventcp, "gettext")) eventfuncs.funccp12();
    if(msg == WM_GETTEXTLENGTH && strstr(windoweventcp, "gettextlength")) eventfuncs.funccp13();
    if(msg == WM_PAINT && strstr(windoweventcp, "paint")) eventfuncs.funccp14();
    if(msg == WM_CLOSE && strstr(windoweventcp, "close")) eventfuncs.funccp15();
    if(msg == WM_QUERYENDSESSION && strstr(windoweventcp, "queryendsession")) eventfuncs.funccp16();
    if(msg == WM_QUERYOPEN && strstr(windoweventcp, "queryopen")) eventfuncs.funccp17();
    if(msg == WM_ENDSESSION && strstr(windoweventcp, "endsession")) eventfuncs.funccp18();
    if(msg == WM_QUIT && strstr(windoweventcp, "quit")) eventfuncs.funccp19();
    if(msg == WM_ERASEBKGND && strstr(windoweventcp, "erasebkgnd")) eventfuncs.funccp20();
    if(msg == WM_SYSCOLORCHANGE && strstr(windoweventcp, "syscolorchange")) eventfuncs.funccp21();
    if(msg == WM_SHOWWINDOW && strstr(windoweventcp, "showwindow")) eventfuncs.funccp22();
    if(msg == WM_WININICHANGE && strstr(windoweventcp, "wininitchange")) eventfuncs.funccp23();
    if(msg == WM_SETTINGCHANGE && strstr(windoweventcp, "settingchange")) eventfuncs.funccp24();
    if(msg == WM_DEVMODECHANGE && strstr(windoweventcp, "devmodechange")) eventfuncs.funccp25();
    if(msg == WM_ACTIVATEAPP && strstr(windoweventcp, "activateapp")) eventfuncs.funccp26();
    if(msg == WM_FONTCHANGE && strstr(windoweventcp, "fontchange")) eventfuncs.funccp27();
    if(msg == WM_TIMECHANGE && strstr(windoweventcp, "timechange")) eventfuncs.funccp28();
    if(msg == WM_CANCELMODE && strstr(windoweventcp, "cancelmode")) eventfuncs.funccp29();
    if(msg == WM_SETCURSOR && strstr(windoweventcp, "setcursor")) eventfuncs.funccp30();
    if(msg == WM_MOUSEACTIVATE && strstr(windoweventcp, "mouseactivate")) eventfuncs.funccp31();
    if(msg == WM_CHILDACTIVATE && strstr(windoweventcp, "childactivate")) eventfuncs.funccp32();
    if(msg == WM_QUEUESYNC && strstr(windoweventcp, "queuesync")) eventfuncs.funccp33();
    if(msg == WM_GETMINMAXINFO && strstr(windoweventcp, "getminmaxinfo")) eventfuncs.funccp34();
    return DefWindowProcW(hwnd, msg, wParam, lParam);
}

void swapi_addwindowevent(char *windowevent, void (*func)(), char *windname){
    if(windoweventcp == NULL || strcmp(windoweventcp, "") == 0){
        windoweventcp = (char *) malloc(sizeof(char)*(strlen(windowevent)+1));
        strcpy(windoweventcp, windowevent);
    }
    else {
        strcat(windoweventcp, " ");
        strcat(windoweventcp, windowevent);
    }
    strcpy(eventfuncswindname, windname);
    if(strstr(windoweventcp, "null") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp1 = func;
    else if(strstr(windoweventcp, "create") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp2 = func;
    else if(strstr(windoweventcp, "destroy") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp3 = func;
    else if(strstr(windoweventcp, "move") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp4 = func;
    else if(strstr(windoweventcp, "size") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp5 = func;
    else if(strstr(windoweventcp, "activate") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp6 = func;
    else if(strstr(windoweventcp, "setfocus") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp7 = func;
    else if(strstr(windoweventcp, "killfocus") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp8 = func;
    else if(strstr(windoweventcp, "enable") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp9 = func;
    else if(strstr(windoweventcp, "setredraw") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp10 = func;
    else if(strstr(windoweventcp, "settext") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp11 = func;
    else if(strstr(windoweventcp, "gettext") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp12 = func;
    else if(strstr(windoweventcp, "gettextlength") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp13 = func;
    else if(strstr(windoweventcp, "paint") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp14 = func;
    else if(strstr(windoweventcp, "close") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp15 = func;
    else if(strstr(windoweventcp, "queryendsession") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp16 = func;
    else if(strstr(windoweventcp, "queryopen") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp17 = func;
    else if(strstr(windoweventcp, "endsession") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp18 = func;
    else if(strstr(windoweventcp, "quit") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp19 = func;
    else if(strstr(windoweventcp, "erasebkgnd") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp20 = func;
    else if(strstr(windoweventcp, "syscolorchange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp21 = func;
    else if(strstr(windoweventcp, "showwindow") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp22 = func;
    else if(strstr(windoweventcp, "wininitchange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp23 = func;
    else if(strstr(windoweventcp, "settingchange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp24 = func;
    else if(strstr(windoweventcp, "devmodechange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp25 = func;
    else if(strstr(windoweventcp, "activateapp") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp26 = func;
    else if(strstr(windoweventcp, "fontchange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp27 = func;
    else if(strstr(windoweventcp, "timechange") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp28 = func;
    else if(strstr(windoweventcp, "cancelmode") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp29 = func;
    else if(strstr(windoweventcp, "setcursor") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp30 = func;
    else if(strstr(windoweventcp, "mouseactivate") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp31 = func;
    else if(strstr(windoweventcp, "childactivate") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp32 = func;
    else if(strstr(windoweventcp, "queuesync") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp33 = func;
    else if(strstr(windoweventcp, "getminmaxinfo") && strcmp(eventfuncswindname, windname) == 0) eventfuncs.funccp34 = func;
}

MSG  msg;    
HWND hwnd;
WNDCLASSW wc;

void swapi_createwindow(LPCWSTR classname, LPCWSTR windowname, int positionx, int positiony, int width, int height){
    window.windowname = windowname;
    window.positionx = positionx;
    window.positiony = positiony;
    window.width = width;
    window.height = height;

    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.lpszClassName = classname;
    wc.hInstance = hInstancecp;
    wc.hbrBackground = GetSysColorBrush(COLOR_3DFACE);
    wc.lpfnWndProc = WndProc;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
}

DWORD style;
int changedstyle = 0;

void swapi_showwindow(){
    if(changedstyle == 0){
        style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
    }
    RegisterClassW(&wc);
    hwnd = CreateWindowW(wc.lpszClassName, window.windowname, style, window.positionx, window.positiony, window.width, window.height, NULL, NULL, hInstancecp, NULL);  
    ShowWindow(hwnd, nCmdShowcp);
    UpdateWindow(hwnd);
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    changedstyle = 0;
}

void swapi_changestyle(DWORD newstyle){
    style = newstyle;
    changedstyle = 1;
}

void swapi_changecursor(char *name){
    if(strcmp(name, "appstarting") == 0) wc.hCursor = LoadCursor(NULL, IDC_APPSTARTING);
    else if(strcmp(name, "arrow") == 0) wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    else if(strcmp(name, "ibeam") == 0) wc.hCursor = LoadCursor(NULL, IDC_IBEAM);
    else if(strcmp(name, "wait") == 0) wc.hCursor = LoadCursor(NULL, IDC_WAIT);
    else if(strcmp(name, "cross") == 0) wc.hCursor = LoadCursor(NULL, IDC_CROSS);
    else if(strcmp(name, "uparrow") == 0) wc.hCursor = LoadCursor(NULL, IDC_UPARROW);
    else if(strcmp(name, "sizenwse") == 0) wc.hCursor = LoadCursor(NULL, IDC_SIZENWSE);
    else if(strcmp(name, "sizenesw") == 0) wc.hCursor = LoadCursor(NULL, IDC_SIZENESW);
    else if(strcmp(name, "sizewe") == 0) wc.hCursor = LoadCursor(NULL, IDC_SIZEWE);
    else if(strcmp(name, "sizens") == 0) wc.hCursor = LoadCursor(NULL, IDC_SIZENS);
    else if(strcmp(name, "sizeall") == 0) wc.hCursor = LoadCursor(NULL, IDC_SIZEALL);
    else if(strcmp(name, "no") == 0) wc.hCursor = LoadCursor(NULL, IDC_NO);
    else if(strcmp(name, "hand") == 0) wc.hCursor = LoadCursor(NULL, IDC_HAND);
    else if(strcmp(name, "help") == 0) wc.hCursor = LoadCursor(NULL, IDC_HELP);
}

void swapi_changeicon(char *name){
    if(strcmp(name, "application") == 0) wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    else if(strcmp(name, "hand") == 0) wc.hIcon = LoadIcon(NULL, IDI_HAND);
    else if(strcmp(name, "question") == 0) wc.hIcon = LoadIcon(NULL, IDI_QUESTION);
    else if(strcmp(name, "exclamation") == 0) wc.hIcon = LoadIcon(NULL, IDI_EXCLAMATION);
    else if(strcmp(name, "asterisk") == 0) wc.hIcon = LoadIcon(NULL, IDI_ASTERISK);
    else if(strcmp(name, "winlogo") == 0) wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);
    else if(strcmp(name, "shield") == 0) wc.hIcon = LoadIcon(NULL, IDI_SHIELD);
    else if(strcmp(name, "warning") == 0) wc.hIcon = LoadIcon(NULL, IDI_WARNING);
    else if(strcmp(name, "error") == 0) wc.hIcon = LoadIcon(NULL, IDI_ERROR);
    else if(strcmp(name, "information") == 0) wc.hIcon = LoadIcon(NULL, IDI_INFORMATION);
}