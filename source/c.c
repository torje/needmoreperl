#include <stdlib.h>
#include <stdio.h>
#define unless(a) if (!(a))
#define untill(a) while(!(a))

int die(const char *msg) {
    printf( "%s\n", msg);
    int num = 127;
    exit(num);
    return num;
}

int main(){
    FILE *fd = fopen( "/home/torje/temp.text", "w" );
    printf("%p\n", fd);
    fd  || die("file not opened");
    printf( "%s\n", "success");
    int a = 0;
    untill ( a >= 10 ) {
	printf( "%d\n", a);
	a++;
    }
    a=0;
    do {
	printf( "%d\n", a);
	a++;
    }untill(a>=10);
    
    return 0;
}
