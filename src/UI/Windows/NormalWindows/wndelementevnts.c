#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"
#include "privswapi.h"

void chkelemsevnts(LPARAM lParam, WPARAM wParam, HWND hwnd){
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
    for(int i = 0; i <= hwndelemcount; i++){
        if(submnoptsfuncs[i] != NULL){
            if(wParam == i+1){
                void (*func)() = submnoptsfuncs[i];
                func();
            }
        }
    }
    for(int i = 2, j = 0; i <= hwndelemcount; i++, j++){
        if(chkboxhwnd[j] != NULL){
            if((HWND)lParam == chkboxhwnd[j]){
                if(IsDlgButtonChecked(hwnd, i)){
                    CheckDlgButton(hwnd, i, BST_UNCHECKED);
                    if(strcmp(chkboxeventtype[j], "unchecked") == 0){
                        void (*func)() = chkboxfuncs[j];
                        func();
                    }
                }
                else {
                    CheckDlgButton(hwnd, i, BST_CHECKED); 
                    if(strcmp(chkboxeventtype[j], "checked") == 0){
                        void (*func)() = chkboxfuncs[j];
                        func();
                    }
                }
            }
        }
    } 
    for(int i = 2, j = 0; i <= hwndelemcount; i++, j++){
        if(rdiobtnhwnd[j] != NULL){
            if((HWND)lParam == rdiobtnhwnd[j]){
                CheckDlgButton(hwnd, i, BST_CHECKED);
                if(IsDlgButtonChecked(hwnd, i)){
                    void (*func)() = rdiobtnfuncs[j];
                    func();
                }
            }
        }
    } 
    for(int i = 2, j = 0; i <= hwndelemcount; i++, j++){
        if(cmbboxhwnd[j] != NULL){
            if(HIWORD(wParam) == CBN_SELCHANGE)
            {
                if(LOWORD(wParam) == i)
                {
                    int index = SendMessage((HWND) lParam, CB_GETCURSEL, (WPARAM) NULL, (LPARAM) NULL);
                    char *text = (char *) malloc(sizeof(char)*1000000);
                    SendMessage((HWND) lParam, (UINT) CB_GETLBTEXT, (WPARAM) index, (LPARAM) text);
                    void (*func)() = cmbboxfuncs[j];
                    func(text);
                    free(text);
                }
                break;
            }
        }
    } 
}