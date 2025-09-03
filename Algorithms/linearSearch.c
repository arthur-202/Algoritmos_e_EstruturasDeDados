#include <stdio.h>

// Algorítmo de busca linear
int linearSearch( int *A, int size, int key )
{
	int i;
	for ( i = 0; i < size; i++ ) {
		if ( A[i] == key )
			return i;
	}
	return -1;
}

// Exemplo de implementação.
int main(void)
{
	int keys[] = { 1, 10, 18, 28, 19, 81, -1, -25 };
	int key;
	int result;
	
	scanf("%d", &key);
	
	result = linearSearch(keys, sizeof(keys) / sizeof(int), key);
	
	if ( result != -1 )
		printf("%d\n", result);
	else
		printf("Esse valor não existe no array.\n");
	
	return 0;
}
