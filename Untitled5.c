#include <stdio.h>
#include <limits.h>

int main() {
  int mangSoNguyen[5];
  int i;
  int max = INT_MIN;
  int min = INT_MAX;

  printf("Nhap 5 so nguyen vao mang:\n");
  for (i = 0; i < 5; i++) {
    printf("Phan tu thu %d: ", i + 1);
    scanf("%d", &mangSoNguyen[i]);

    if (mangSoNguyen[i] > max) {
      max = mangSoNguyen[i];
    }
    if (mangSoNguyen[i] < min) {
      min = mangSoNguyen[i];
    }
  }

  printf("Phan tu lon nhat trong mang la: %d\n", max);
  printf("Phan tu nho nhat trong mang la: %d\n", min);

  return 0;
}
