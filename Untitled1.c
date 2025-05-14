#include <stdio.h>

int main() {
  printf("Chao mung den voi the gioi C!\n");
  int soNguyen = 10;
  float soThuc = 3.14;
  char kyTu = 'A';

  printf("So nguyen: %d\n", soNguyen);
  printf("So thuc: %f\n", soThuc);
  printf("Ky tu: %c\n", kyTu);

  if (soNguyen > 5) {
    printf("So nguyen lon hon 5.\n");
  } else {
    printf("So nguyen khong lon hon 5.\n");
  }
int i; 
  for (i = 0; i < 5; i++) {
    printf("Lap lai lan thu: %d\n", i + 1);
  }

  return 0;
}
