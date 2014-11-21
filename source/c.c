#include "perllib.h"

int main(){
    array(int, someArray);
    resize(someArray, 1024) or die("allocation failed");
    FILE *fd;
    open( &fd , "<", "/home/torje/source/needmoreperl/source/c.c") or die("could not open file");
    char * a;
    ( a = malloc(1024)  ) or die( "malloc failed");
    fscanf( fd, "%s\n", a );
    printf( "%s\n", a);
    return 0;
}
