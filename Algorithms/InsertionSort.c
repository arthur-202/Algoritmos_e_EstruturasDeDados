#include <stdio.h>

/* Implementação do InsertionSort */
void InsertionSort( int *A, int sizeA ) 
{
  int j, i, key;

  for ( j = 1; j < sizeA; j++ ) {
    key = A[j];    
    i = j - 1;

    while ( i >= 0 && A[i] > key ) {
      A[i+1] = A[i];
      i -= 1;
    }
    A[i+1] = key;
  }

}

// Exemplo main de implementação;
int main(void)
{
  int arr[] = { 2, 27, 8, 9, 17, 1, -1, 12, 27 };
  int size = sizeof(arr) / sizeof(int);
  
  InsertionSort(arr, size);

  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");
  
  return 0;
}
