#include <stdio.h>

int main() {
  int mangSoNguyen[5];
  int i;

  printf("Nhap 5 so nguyen vao mang:\n");
  for (i = 0; i < 5; i++) {
    printf("Phan tu thu %d: ", i + 1);
    scanf("%d", &mangSoNguyen[i]);
  }

  printf("Cac so vua nhap la:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", mangSoNguyen[i]);
  }
  printf("\n");

  return 0;
}
