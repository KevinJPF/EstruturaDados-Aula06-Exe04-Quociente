#include <stdio.h>

int Quoc(m, n) {
  if (m < 1)
    return 0;

  return Quoc(m - n, n) + 1;
}

int main(void) {
  int m, n;
  printf("Digite o valor de m: ");
  scanf("%d", &m);
  printf("Digite o valor de n: ");
  scanf("%d", &n);

  printf("O quociente de %d / %d e: %d\n", m, n, Quoc(m, n));
  return 0;
}