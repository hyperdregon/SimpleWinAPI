#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"

void swapi_createfile(LPCSTR path, BOOL directory){
    if(directory == FALSE) CreateFile(path, FILE_READ_DATA, FILE_SHARE_READ, NULL, OPEN_ALWAYS, 0, NULL);
    else if(directory == TRUE) CreateDirectory(path, NULL);
}

void swapi_hidefile(LPCSTR path){
    DWORD attributes = GetFileAttributes(path);
    SetFileAttributes(path, attributes + FILE_ATTRIBUTE_HIDDEN);
}

BOOL swapi_checkiffileexists(LPCSTR path){
    DWORD attrib = GetFileAttributes(path);
    return (attrib != INVALID_FILE_ATTRIBUTES && (attrib & FILE_ATTRIBUTE_DIRECTORY));
}