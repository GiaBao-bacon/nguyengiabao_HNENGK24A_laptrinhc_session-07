#include <stdio.h>

int main() {
  int mangSoNguyen[5] = {12, 7, 24, 9, 18};
  int i;

  printf("Cac phan tu cua mang la:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", mangSoNguyen[i]);
  }
  printf("\n");

  printf("Cac so chan trong mang la:\n");
  for (i = 0; i < 5; i++) {
    if (mangSoNguyen[i] % 2 == 0) {
      printf("%d ", mangSoNguyen[i]);
    }
  }
  printf("\n");

  return 0;
}
