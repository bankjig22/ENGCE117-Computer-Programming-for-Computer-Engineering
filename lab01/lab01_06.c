#include <stdio.h>

int *GetArr2D( int *row, int *col ){
  int *a ;
  printf( "How many row, col ? " );
  scanf( "%d %d", row, col );
  a = new int[ *row * *col ];
  for( int i = 0 ; i < *row ; i++ ) {
    for( int j = 0 ; j < *col ; j++ ) {
      printf( "a[%d][%d] = ", i, j );
      scanf( "%d", &a[ i * *col + j ] );
    }
  }
  return a;
}

int main() {
  int r, c, *arr;
  arr = GetArr2D( &r, &c );
  return 0;
}