#include<stdio.h>

int add( int a[] , int n ) {
	int sum = 0;
	int i;
	for( i = 0 ; i < n ; i++ ) {
		sum = sum + a[ i ];
	}
	return sum;	
}
