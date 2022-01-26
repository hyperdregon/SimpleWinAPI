#include <stdio.h>
#include <stdlib.h>
#include <swapi.h>
#include <commctrl.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){ return 0; }

HINSTANCE hInstancecp;
HINSTANCE hPrevInstancecp; 
LPSTR lpCmdLinecp; 
int nCmdShowcp;

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
    void (*funccp35)();
};

int closewindow = 0;

char *windoweventcp;

struct winproperties {
    LPCWSTR windowname; 
    int positionx; 
    int positiony; 
    int width;
    int height;
};

HFONT hfont;

struct winproperties window;
struct wineventfuncs eventfuncs;

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if(windoweventcp != NULL && strcmp(windoweventcp, "") != 0){
        if(msg == WM_NULL && strstr(windoweventcp, "null")) eventfuncs.funccp1();
        if(msg == WM_CREATE && strstr(windoweventcp, "create")) eventfuncs.funccp2();
        if(msg == WM_DESTROY && strstr(windoweventcp, "destroy")) eventfuncs.funccp3();
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
        if(msg == WM_SETFONT && strstr(windoweventcp, "setfont")) eventfuncs.funccp35();
    }
    switch (msg)
    {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        case WM_CREATE:
            INITCOMMONCONTROLSEX icc;

            icc.dwSize = sizeof(icc);
            icc.dwICC = ICC_WIN95_CLASSES;
            InitCommonControlsEx(&icc);
            if (!hfont)
            {
                NONCLIENTMETRICS metrics;
                metrics.cbSize = sizeof(NONCLIENTMETRICS);
                SystemParametersInfo(SPI_GETNONCLIENTMETRICS, sizeof(NONCLIENTMETRICS), &metrics, 0);
                hfont = CreateFontIndirect(&metrics.lfMessageFont);
            }
            SendMessage(hwnd, WM_SETFONT, (WPARAM)hfont, MAKELPARAM(TRUE, 0));
            break;
        case WM_COMMAND:
            for(int i = 0; i < 1000000; i++){
                if(btnhwnd[i] != NULL){
                    if ((HWND)lParam == btnhwnd[i]) {
                        if(HIWORD(wParam) == BN_CLICKED && strcmp(btneventtype[i], "clicked") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_DOUBLECLICKED && strcmp(btneventtype[i], "doubleclicked") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_DISABLE && strcmp(btneventtype[i], "disable") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_HILITE && strcmp(btneventtype[i], "hilite") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_KILLFOCUS && strcmp(btneventtype[i], "killfocus") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_PAINT && strcmp(btneventtype[i], "paint") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_PUSHED && strcmp(btneventtype[i], "pushed") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_SETFOCUS && strcmp(btneventtype[i], "setfocus") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_UNHILITE && strcmp(btneventtype[i], "unhilite") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                        else if(HIWORD(wParam) == BN_UNPUSHED && strcmp(btneventtype[i], "unpushed") == 0) {
                            void (*func)() = btnfuncs[i];
                            func();
                        }
                    }
                }
                else break;
            }
            for(int i = 0; i < 1000000; i++){
                if(txtfldhwnd[i] != NULL){
                    if ((HWND)lParam == txtfldhwnd[i]) {
                        if(HIWORD(wParam) != EN_SETFOCUS && HIWORD(wParam) != EN_KILLFOCUS) {
                            void (*func)() = txtfldfuncs[i];
                            func();
                        }
                    }
                }
                else break;
            }
            for(int i = 0; i < 1000; i++){
                if(txtfldhwnd[i] != NULL){
                    if ((HWND)lParam == txtfldhwnd[i]) {
                        if(HIWORD(wParam) != EN_SETFOCUS && HIWORD(wParam) != EN_KILLFOCUS) {
                            void (*func)() = txtfldfuncs[i];
                            func();
                        }
                    }
                }
                else break;
            }
            for(int i = 0; i < 1000; i++){
                if(submnoptsfuncs[i] != NULL){
                    if(wParam == i+1){
                        void (*func)() = submnoptsfuncs[i];
                        func();
                    }
                }
                else break;
            }
            break;
    }
    return DefWindowProcW(hwnd, msg, wParam, lParam);
}

void swapi_setwindowevent(char *windowevent, void (*func)()){
    if(windoweventcp == NULL || strcmp(windoweventcp, "") == 0){
        windoweventcp = (char *) malloc(sizeof(char)*1000000);
        strcpy(windoweventcp, windowevent);
    }
    else {
        strcat(windoweventcp, " ");
        strcat(windoweventcp, windowevent);
    }
    if(strstr(windoweventcp, "null")) eventfuncs.funccp1 = func;
    else if(strstr(windoweventcp, "create")) eventfuncs.funccp2 = func;
    else if(strstr(windoweventcp, "destroy")) eventfuncs.funccp3 = func;
    else if(strstr(windoweventcp, "move")) eventfuncs.funccp4 = func;
    else if(strstr(windoweventcp, "size")) eventfuncs.funccp5 = func;
    else if(strstr(windoweventcp, "activate")) eventfuncs.funccp6 = func;
    else if(strstr(windoweventcp, "setfocus")) eventfuncs.funccp7 = func;
    else if(strstr(windoweventcp, "killfocus")) eventfuncs.funccp8 = func;
    else if(strstr(windoweventcp, "enable")) eventfuncs.funccp9 = func;
    else if(strstr(windoweventcp, "setredraw")) eventfuncs.funccp10 = func;
    else if(strstr(windoweventcp, "settext")) eventfuncs.funccp11 = func;
    else if(strstr(windoweventcp, "gettext")) eventfuncs.funccp12 = func;
    else if(strstr(windoweventcp, "gettextlength")) eventfuncs.funccp13 = func;
    else if(strstr(windoweventcp, "paint")) eventfuncs.funccp14 = func;
    else if(strstr(windoweventcp, "close")) eventfuncs.funccp15 = func;
    else if(strstr(windoweventcp, "queryendsession")) eventfuncs.funccp16 = func;
    else if(strstr(windoweventcp, "queryopen")) eventfuncs.funccp17 = func;
    else if(strstr(windoweventcp, "endsession")) eventfuncs.funccp18 = func;
    else if(strstr(windoweventcp, "quit")) eventfuncs.funccp19 = func;
    else if(strstr(windoweventcp, "erasebkgnd")) eventfuncs.funccp20 = func;
    else if(strstr(windoweventcp, "syscolorchange")) eventfuncs.funccp21 = func;
    else if(strstr(windoweventcp, "showwindow")) eventfuncs.funccp22 = func;
    else if(strstr(windoweventcp, "wininitchange")) eventfuncs.funccp23 = func;
    else if(strstr(windoweventcp, "settingchange")) eventfuncs.funccp24 = func;
    else if(strstr(windoweventcp, "devmodechange")) eventfuncs.funccp25 = func;
    else if(strstr(windoweventcp, "activateapp")) eventfuncs.funccp26 = func;
    else if(strstr(windoweventcp, "fontchange")) eventfuncs.funccp27 = func;
    else if(strstr(windoweventcp, "timechange")) eventfuncs.funccp28 = func;
    else if(strstr(windoweventcp, "cancelmode")) eventfuncs.funccp29 = func;
    else if(strstr(windoweventcp, "setcursor")) eventfuncs.funccp30 = func;
    else if(strstr(windoweventcp, "mouseactivate")) eventfuncs.funccp31 = func;
    else if(strstr(windoweventcp, "childactivate")) eventfuncs.funccp32 = func;
    else if(strstr(windoweventcp, "queuesync")) eventfuncs.funccp33 = func;
    else if(strstr(windoweventcp, "getminmaxinfo")) eventfuncs.funccp34 = func;
    else if(strstr(windoweventcp, "setfont")) eventfuncs.funccp35 = func;
}

MSG  msg;
HWND hwnd;
WNDCLASSW wc;

int changedstyle = 0;
DWORD style;

void swapi_initwindow(LPCWSTR windowname, int positionx, int positiony, int width, int height){
    window.windowname = windowname;
    window.positionx = positionx;
    window.positiony = positiony;
    window.width = width;
    window.height = height;

    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.lpszClassName = L"WINDOW";
    wc.hInstance = hInstancecp;
    wc.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
    wc.lpfnWndProc = WndProc;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);

    if(changedstyle == 0){
        style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
    }
}

HWND swapi_createwindow(){
    RegisterClassW(&wc);
    hwnd = CreateWindowW(wc.lpszClassName, window.windowname, style, window.positionx, window.positiony, window.width, window.height, NULL, NULL, hInstancecp, NULL);
    HFONT hFont = CreateFontW(20, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, L"Arial");
    SendMessage(hwnd, WM_SETFONT, (WPARAM) hFont, TRUE);
    GetMessage(&msg, NULL, 0, 0);
    TranslateMessage(&msg);
    DispatchMessage(&msg);
    return hwnd;
}

int runnedfunc = 0;

void swapi_showwindow(){
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