#include <stdio.h>

double potenza_ric(double base, int pot)
{
  if(pot == 1) return base;

  return base*potenza_ric(base, pot-1);
}


double sommatoria_ite(int n, float k)
{
  double somma;
  for(int i = 1; i<=n; i++)
    {
      somma = somma + ( (i*potenza_ric(k, i+1)) / potenza_ric(3, i) );
    }

  return somma;
}

double sommatoria_ric(int n, float k)
{
  if(n == 1) return k * k / 3;

  double ris = ( (n*potenza_ric(k, n+1)) / potenza_ric(3, n) );
  
  return ris + sommatoria_ric(n-1,k);
}

void main()
{

  int n;
  double k;
  
  printf("N: ");
  scanf("%d", &n);
  printf("\n");

  printf("K: ");
  scanf("%lf", &k);
  printf("\n");


  printf("Risultato: %lf/%lf\n", sommatoria_ric(n,k), sommatoria_ite(n,k));
}

