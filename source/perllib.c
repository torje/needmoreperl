#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "perllib.h"

int die(const char *msg) {
    printf( "%s\n", msg);
    int num = 127;
    exit(num);
    return num;
}

int open( FILE ** fd, char const * mode, char const * path){
    if ( strcmp("<", mode)== 0){
	*fd = fopen(path , "r");
    }else if ( strcmp(">", mode) == 0 ) {
	*fd = fopen(path , "w");
    }
    int ret;
    if ( fd ){
	ret = 1;
    }else{
	ret = 0;
    }
    return ret;
} 
