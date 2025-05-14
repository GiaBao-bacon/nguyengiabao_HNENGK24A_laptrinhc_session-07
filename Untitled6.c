#include <stdio.h>

int main() {
  int mangSoNguyen[5];
  int i;
  int chanThayThe = 2;
  int leThayThe = 3;

  printf("Nhap 5 so nguyen vao mang:\n");
  for (i = 0; i < 5; i++) {
    printf("Phan tu thu %d: ", i + 1);
    scanf("%d", &mangSoNguyen[i]);
  }

  printf("Mang sau khi thay the:\n");
  for (i = 0; i < 5; i++) {
    if (mangSoNguyen[i] % 2 == 0) {
      mangSoNguyen[i] = chanThayThe;
    } else {
      mangSoNguyen[i] = leThayThe;
    }
    printf("%d ", mangSoNguyen[i]);
  }
  printf("\n");

  return 0;
}
