#include <stdio.h>
#include <stdlib.h>
#include "swapi.h"

char *swapi_getexecpath(){
    char *opath = (char *) malloc(sizeof(char)*1000);
    GetModuleFileName(NULL, opath, 1000);
    char *path = (char *) malloc(sizeof(char)*(strlen(opath)+1));
    strcpy(path, opath);
    free(opath);
    return path;
}

char *swapi_getpathoffolderofexec(){
    char *opath = (char *) malloc(sizeof(char)*1000);
    GetModuleFileName(NULL, opath, 1000);
    for(int i = strlen(opath)-1; opath[i] != '\\'; i--){
        opath[i] = '\0';
    }
    char *path = (char *) malloc(sizeof(char)*(strlen(opath)+1));
    strcpy(path, opath);
    free(opath);
    return path;
}