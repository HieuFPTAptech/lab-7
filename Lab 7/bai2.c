#include <stdio.h>

int binarySearch(char str[], char key) {
  int left = 0;
  int right = strlen(str) - 1;

  while (left <= right)  
  {
    int mid = left + (right - left) / 2;

    if (str[mid] == key) 
    {
      return mid;
    } 
    else if (str[mid] < key) 
    {
      left = mid + 1;
    } 
    else 
    {
      right = mid - 1;
    }
  }

  return -1;
}

int main(int argc, char const *argv[])
{
  char str[100];
  char key;

  printf("\nEnter String: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  printf("\nEnter characters: ");
  scanf("%c", &key);

  int index = binarySearch(str, key);
  if (index == -1) 
  {
    printf("\nCan not find '%c' in Array", key);
  } 
  else 
  {
    printf("\n'%c' is at %d position in Array", key, index);
  }

  return 0;
}
