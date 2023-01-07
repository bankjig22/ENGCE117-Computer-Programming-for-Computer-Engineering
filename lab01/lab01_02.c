#include <stdio.h>

int main() {
    int g[4][5] = {
        { 10, 20, 30, 40, 50} ,
        { 11, 21, 31, 41, 51} ,
        { 12, 22, 32, 42, 52} ,
        { 13, 23, 33, 43, 53} 
    } ;

    for(int a = 0 ; a < 4 ; a++) {
        for(int b = 0 ; b < 5 ; b++)
            printf("%d ", g[a][b]) ;
        printf("\n") ;
    }
    printf("-----------------------------\n");
    int (*j)[5] = g;

    j[2][4] = 99;

    for(int a = 0 ; a < 4 ; a++) {
        for(int b = 0 ; b < 5 ; b++)
            printf("%d ", g[a][b]) ;
        printf("\n") ;
    }
    return 0 ;
}