#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"");
    int num ;
    int sum = 0 ;
    int z = 9 ;
    printf( "input number : " ) ;
    scanf(" %d", &num ) ;
    printf("----\n") ;
    printf("Series = ") ;
    
    for (int i = 0; i < num; i++) {
        sum = sum += z ;
            if (i != 0) {
                printf(" + ") ;
            }
            printf("%d",z);
            z = z*10 + 9;     
    }
    printf("\nsum = %'d", sum) ;
        
    return 0 ;
}