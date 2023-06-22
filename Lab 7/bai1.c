#include <stdio.h>
#include <math.h>

void Sort (int array[], int n)
{
  int i, element, j;
  for ( i = 1; i < n; i++)
  {
    element = array[i]; j = i - 1;
    while (j >= 0 && array[j] > element)
    {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = element;
  }
}

void printArray (int array[], int n)
{
  int i;
  for ( i = 0; i < n; i++)
  {
    printf("%d; ", array[i]);
  } 
}

int main(int argc, char const *argv[])
{
  int arr[100];
  int n;

  printf("\nEnter number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter element number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
    
  Sort(arr, n);
  printArray(arr, n);

  return 0;
}
