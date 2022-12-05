#include <stdio.h>

double potenza_ric(double base, int pot)
{
  if(pot == 1) return base;

  return base*potenza_ric(base, pot-1);
}


double sommatoria_ric(double n)
{
  if (n == 0) return 1;

  double somma = 1 / potenza_ric(2*n+1, 2);

  printf("SOMMA: %lf\n", somma);
  
  return somma + sommatoria_ric(n-1);
} 

void main()
{
  int numero = 0;
  
  printf("Inserire il numero: ");
  scanf("%d", &numero);
  printf("\n");

  printf("Risultato: %lf\n", sommatoria_ric(numero));
}