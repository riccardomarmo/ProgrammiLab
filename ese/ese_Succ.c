#include <stdio.h>

int somma_ric(int i, int j)
{
  
  if(j == i) return j;

  return somma_ric(i+1, j);
}

int somma_ite(int a, int b)
{
  int x=0;
  
  for(int i = a; i<b; i++)
    {
      x = x+somma_ric(i, b);
    }
  
  return x;
}


void main()
{

  int n, m;

  
  printf("Numero 1: ");
  scanf("%d", &n);
  printf("\n");

  printf("Numero 2: ");
  scanf("%d", &m);
  printf("\n");

  printf("il risultato e' %d\n", somma_ite(n, m));
  
}