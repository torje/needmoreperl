#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define unless(a) if (!(a))
#define untill(a) while(!(a))
#define or ||
#define and &&
#define array( type, var) type *var =NULL
#define resize(array, newsize)  \
   array = realloc( array, sizeof(typeof(array[0]))*newsize);	\
   array 

int die(char const * );
int open( FILE **, char const *, char const *);
