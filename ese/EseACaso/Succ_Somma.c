#include <stdio.h>

int succ_ric(int i)
{
  if(i == 0) return 1;
  
  return 2 * succ_ric(i-1) + 3;
}

int somma_ric(int z, int t)
{
  if(z == t) return 3*succ_ric(t);

  int somma = 3*succ_ric(z);

  return somma + somma_ric(z+1, t);
}

void main()
{

  int z = 0;
  int t = 0;
  
  printf("Numero: ");
  scanf("%d", &z);
  printf("\n");

  printf("Numero: ");
  scanf("%d", &t);
  printf("\n");
  
  printf("Risultato --> %d\n", somma_ric(z,t));
}