#include <stdio.h>

int main() {
  int mangSoNguyen[5];
  int i;

  mangSoNguyen[0] = 10;
  mangSoNguyen[1] = 25;
  mangSoNguyen[2] = 5;
  mangSoNguyen[3] = 15;
  mangSoNguyen[4] = 30;

  printf("Cac phan tu cua mang la:\n");
  for (i = 0; i < 5; i++) {
    printf("Phan tu thu %d: %d\n", i, mangSoNguyen[i]);
  }

  int tong = 0;
  for (i = 0; i < 5; i++) {
    tong += mangSoNguyen[i];
  }
  printf("Tong cac phan tu cua mang la: %d\n", tong);

  return 0;
}
