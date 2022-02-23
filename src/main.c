#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"

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