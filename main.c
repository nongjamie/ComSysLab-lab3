#include <stdio.h>

extern int sum( int x , int y );

int main( void ) {
  int x , y , s;
  x = 3;
  y = 5;
  s = sum( x , y );
  printf( "%d\n" , s );
  return 0;
}
