#include<stdio.h>

int main() {
    int a[100] ;
    int size  ;
    printf("input number of element to be store in Array : ");
    scanf("%d",&size);
    
    for(int i = 0; i< size; i++) {
        printf("Element[%d] : ",i+1) ;
        scanf("%d",&a[i]) ;
    }    
    return 0 ;
}