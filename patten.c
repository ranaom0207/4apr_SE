#include <stdio.h>

int main() {
  // right pasal triangle
  int size = 5;

  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  for (int i = 1; i <= size-1; i++) {
    for (int j = 0; j < size-i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
