#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"
#include "privswapi.h"

struct imgproperties {
    HWND winhwnd;
    int x;
    int y; 
    int width; 
    int height;
    LPCWSTR path;
};
struct imgproperties imgprots;

void swapi_createimage(HWND winhwnd, int x, int y, int width, int height, LPCWSTR path){
    imgprots.winhwnd = winhwnd;
    imgprots.x = x;
    imgprots.y = y;
    imgprots.width = width;
    imgprots.height = height;
    imgprots.path = path;
}

HWND swapi_showimage(){
    hwndelemcount++;
    HBITMAP bitmap = (HBITMAP) LoadImageW(NULL,imgprots.path,IMAGE_BITMAP,0,0,LR_LOADFROMFILE);
    HWND hwnd = CreateWindowW(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, imgprots.x, imgprots.y, imgprots.width, imgprots.height, imgprots.winhwnd, (HMENU) hwndelemcount, hInstancecp, NULL);
    SendMessageW(hwnd, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM) bitmap);
    return hwnd;
}