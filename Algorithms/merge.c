#include <stdio.h>

// Procedimento merge
void merge( int *A, int p, int q, int r )
{
	int i, j, k;
	int n1 = q - p + 1;
	int n2 = r - q;
	int left[n1], right[n2];
	
	for ( i = 0; i < n1; i++ )
		left[i] = A[p+i];
	for ( j = 0; j < n2; j++ )
		right[j] = A[p+1+j];

	i = 0, j = 0, k = 0;
	
	while ( i < n1 && j < n2 )
		if ( left[i] <= right[j] )
			A[k] = left[i++];
		else
			A[k] = right[j++];
		k++;
}

