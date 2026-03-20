#include <stdio.h>

void add(int *a, int *b) {
  int k;
  k = *a + *b;
  printf("%d + %d = %d\n", *a, *b,  k);
}
void sub(int *a, int *b) {
  int k;
  k = *a - *b;
  printf("%d - %d = %d\n", *a, *b,  k);
}
void mul(int *a, int *b) {
  int k;
  k = *a * *b;
  printf("%d * %d = %d\n", *a, *b,  k);
}
void div(int *a, int *b) {
  int k;
  k = *a / *b;
  printf("%d / %d = %d\n", *a, *b,  k);
}


int main(void) {
  int a = 10, b = 5;
  add(&a, &b);
  sub(&a, &b);
  mul(&a, &b);
  div(&a, &b);

  return 0;
}
