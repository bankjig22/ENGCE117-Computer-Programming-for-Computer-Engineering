#include <stdio.h>

int add( int x, int y) {
    return x + y ;
}

int operation(int x, int y, int (*function) (int,int)){
    return (*function)(x,y) ;
}

int main () {
    printf("===> %d", operation(5, 5, add));
    return 0 ; 
}