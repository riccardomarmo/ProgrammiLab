#include <stdio.h>

int somma_prodotto(int x, int y, int *s)
{
  *s = x * y;

  return x+y;
}

void main()
{
  int x = 5;
  int y = 10;
  int prodotto, somma;

  somma = somma_prodotto(x, y, &prodotto);

  printf("Somma/Prodotto: %d, %d\n", somma, prodotto);
}