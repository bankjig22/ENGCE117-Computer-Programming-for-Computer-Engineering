#include <stdio.h>

void swap( int* xp, int* yp ) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
} // end swap()

void bubbleSort( int arr[], int n ) {
   for( int i = 0 ; i < n - 1 ; i++ )
      for( int j = 0 ; j < n - i - 1 ; j++ )
         if( arr[ j ] > arr[ j + 1 ] ) 
            swap( &arr[ j ], &arr[ j + 1 ] ) ;
} // end bubbleSort()

void printArray( int arr[], int size ) {
   int prev = arr[ 0 ] ;
   int count = 1 ;

   for( int i = 1 ; i <= size ; i++ ) {
      if ( arr[ i ] == prev ) {
         count++ ;
      } else {
         printf( "%d -> %d\n", prev, count ) ;
         prev = arr[ i ] ;
         count = 1 ;
      }
   } // end for i
} // end printArray()

int main() { 
   int len_arr ;
   int sum = 0 ;
   int arr[ 100 ] ;

   // Input array size
   printf( "Input number of element to be store in array : " ) ;
   scanf( "%d", &len_arr ) ;

   // Input number of element to be
   printf( "----\n" ) ;
   for( int i = 0 ; i < len_arr ; i++ ) {
      printf( "Element[%d] : ", i + 1 ) ;
      scanf( "%d", &arr[ i ] ) ;
   } // end for

   bubbleSort( arr, len_arr ) ; // Array Sort Functions
   printf( "----\n" ) ;
   printArray( arr, len_arr ) ; // Print Functions

   return 0 ;     
} // end main()