#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){ return 0; }
int windowcount = 0;

void swapi_init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    hInstancecp = hInstance;
    hPrevInstancecp = hPrevInstance;
    lpCmdLinecp = lpCmdLine;
    nCmdShowcp = nCmdShow;
}

struct functions {
    void (*funccp)();
};

char *windoweventcp;

struct winproperties {
    LPCWSTR windowname; 
    int positionx; 
    int positiony; 
    int width;
    int height;
    struct functions funccp1;
    struct functions funccp2;
    struct functions funccp3;
    struct functions funccp4;
    struct functions funccp5;
    struct functions funccp6;
    struct functions funccp7;
    struct functions funccp8;
    struct functions funccp9;
    struct functions funccp10;
    struct functions funccp11;
    struct functions funccp12;
    struct functions funccp13;
    struct functions funccp14;
    struct functions funccp15;
    struct functions funccp16;
    struct functions funccp17;
    struct functions funccp18;
    struct functions funccp19;
    struct functions funccp20;
    struct functions funccp21;
    struct functions funccp22;
    struct functions funccp23;
    struct functions funccp24;
    struct functions funccp25;
    struct functions funccp26;
    struct functions funccp27;
    struct functions funccp28;
    struct functions funccp29;
    struct functions funccp30;
    struct functions funccp31;
    struct functions funccp32;
    struct functions funccp33;
    struct functions funccp34;
};

struct winproperties window;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if(msg == WM_NULL && strstr(windoweventcp, "null")) window.funccp1.funccp();
    if(msg == WM_CREATE && strstr(windoweventcp, "create")) window.funccp2.funccp();
    if(msg == WM_DESTROY && strstr(windoweventcp, "destroy")) window.funccp3.funccp();
    if(msg == WM_MOVE && strstr(windoweventcp, "move")) window.funccp4.funccp();
    if(msg == WM_SIZE && strstr(windoweventcp, "size")) window.funccp5.funccp();
    if(msg == WM_ACTIVATE && strstr(windoweventcp, "activate")) window.funccp6.funccp();
    if(msg == WM_SETFOCUS && strstr(windoweventcp, "setfocus")) window.funccp7.funccp();
    if(msg == WM_KILLFOCUS && strstr(windoweventcp, "killfocus")) window.funccp8.funccp();
    if(msg == WM_ENABLE && strstr(windoweventcp, "enable")) window.funccp9.funccp();
    if(msg == WM_SETREDRAW && strstr(windoweventcp, "setredraw")) window.funccp10.funccp();
    if(msg == WM_SETTEXT && strstr(windoweventcp, "settext")) window.funccp11.funccp();
    if(msg == WM_GETTEXT && strstr(windoweventcp, "gettext")) window.funccp12.funccp();
    if(msg == WM_GETTEXTLENGTH && strstr(windoweventcp, "gettextlength")) window.funccp13.funccp();
    if(msg == WM_PAINT && strstr(windoweventcp, "paint")) window.funccp14.funccp();
    if(msg == WM_CLOSE && strstr(windoweventcp, "close")) window.funccp15.funccp();
    if(msg == WM_QUERYENDSESSION && strstr(windoweventcp, "queryendsession")) window.funccp16.funccp();
    if(msg == WM_QUERYOPEN && strstr(windoweventcp, "queryopen")) window.funccp17.funccp();
    if(msg == WM_ENDSESSION && strstr(windoweventcp, "endsession")) window.funccp18.funccp();
    if(msg == WM_QUIT && strstr(windoweventcp, "quit")) window.funccp19.funccp();
    if(msg == WM_ERASEBKGND && strstr(windoweventcp, "erasebkgnd")) window.funccp20.funccp();
    if(msg == WM_SYSCOLORCHANGE && strstr(windoweventcp, "syscolorchange")) window.funccp21.funccp();
    if(msg == WM_SHOWWINDOW && strstr(windoweventcp, "showwindow")) window.funccp22.funccp();
    if(msg == WM_WININICHANGE && strstr(windoweventcp, "wininitchange")) window.funccp23.funccp();
    if(msg == WM_SETTINGCHANGE && strstr(windoweventcp, "settingchange")) window.funccp24.funccp();
    if(msg == WM_DEVMODECHANGE && strstr(windoweventcp, "devmodechange")) window.funccp25.funccp();
    if(msg == WM_ACTIVATEAPP && strstr(windoweventcp, "activateapp")) window.funccp26.funccp();
    if(msg == WM_FONTCHANGE && strstr(windoweventcp, "fontchange")) window.funccp27.funccp();
    if(msg == WM_TIMECHANGE && strstr(windoweventcp, "timechange")) window.funccp28.funccp();
    if(msg == WM_CANCELMODE && strstr(windoweventcp, "cancelmode")) window.funccp29.funccp();
    if(msg == WM_SETCURSOR && strstr(windoweventcp, "setcursor")) window.funccp30.funccp();
    if(msg == WM_MOUSEACTIVATE && strstr(windoweventcp, "mouseactivate")) window.funccp31.funccp();
    if(msg == WM_CHILDACTIVATE && strstr(windoweventcp, "childactivate")) window.funccp32.funccp();
    if(msg == WM_QUEUESYNC && strstr(windoweventcp, "queuesync")) window.funccp33.funccp();
    if(msg == WM_GETMINMAXINFO && strstr(windoweventcp, "getminmaxinfo")) window.funccp34.funccp();
    return DefWindowProcW(hwnd, msg, wParam, lParam);
}

void swapi_addwindowevent(char *windowevent, void (*func)()){
    if(windoweventcp == NULL || strcmp(windoweventcp, "") == 0){
        windoweventcp = (char *) malloc(sizeof(char)*(strlen(windowevent)+1));
        strcpy(windoweventcp, windowevent);
    }
    else {
        strcat(windoweventcp, " ");
        strcat(windoweventcp, windowevent);
    }
    if(strstr(windoweventcp, "null")) window.funccp1.funccp = func;
    else if(strstr(windoweventcp, "create")) window.funccp2.funccp = func;
    else if(strstr(windoweventcp, "destroy")) window.funccp3.funccp = func;
    else if(strstr(windoweventcp, "move")) window.funccp4.funccp = func;
    else if(strstr(windoweventcp, "size")) window.funccp5.funccp = func;
    else if(strstr(windoweventcp, "activate")) window.funccp6.funccp = func;
    else if(strstr(windoweventcp, "setfocus")) window.funccp7.funccp = func;
    else if(strstr(windoweventcp, "killfocus")) window.funccp8.funccp = func;
    else if(strstr(windoweventcp, "enable")) window.funccp9.funccp = func;
    else if(strstr(windoweventcp, "setredraw")) window.funccp10.funccp = func;
    else if(strstr(windoweventcp, "settext")) window.funccp11.funccp = func;
    else if(strstr(windoweventcp, "gettext")) window.funccp12.funccp = func;
    else if(strstr(windoweventcp, "gettextlength")) window.funccp13.funccp = func;
    else if(strstr(windoweventcp, "paint")) window.funccp14.funccp = func;
    else if(strstr(windoweventcp, "close")) window.funccp15.funccp = func;
    else if(strstr(windoweventcp, "queryendsession")) window.funccp16.funccp = func;
    else if(strstr(windoweventcp, "queryopen")) window.funccp17.funccp = func;
    else if(strstr(windoweventcp, "endsession")) window.funccp18.funccp = func;
    else if(strstr(windoweventcp, "quit")) window.funccp19.funccp = func;
    else if(strstr(windoweventcp, "erasebkgnd")) window.funccp20.funccp = func;
    else if(strstr(windoweventcp, "syscolorchange")) window.funccp21.funccp = func;
    else if(strstr(windoweventcp, "showwindow")) window.funccp22.funccp = func;
    else if(strstr(windoweventcp, "wininitchange")) window.funccp23.funccp = func;
    else if(strstr(windoweventcp, "settingchange")) window.funccp24.funccp = func;
    else if(strstr(windoweventcp, "devmodechange")) window.funccp25.funccp = func;
    else if(strstr(windoweventcp, "activateapp")) window.funccp26.funccp = func;
    else if(strstr(windoweventcp, "fontchange")) window.funccp27.funccp = func;
    else if(strstr(windoweventcp, "timechange")) window.funccp28.funccp = func;
    else if(strstr(windoweventcp, "cancelmode")) window.funccp29.funccp = func;
    else if(strstr(windoweventcp, "setcursor")) window.funccp30.funccp = func;
    else if(strstr(windoweventcp, "mouseactivate")) window.funccp31.funccp = func;
    else if(strstr(windoweventcp, "childactivate")) window.funccp32.funccp = func;
    else if(strstr(windoweventcp, "queuesync")) window.funccp33.funccp = func;
    else if(strstr(windoweventcp, "getminmaxinfo")) window.funccp34.funccp = func;
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