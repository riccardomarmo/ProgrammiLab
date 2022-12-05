#include <stdio.h>

int potenza_ric(int n)
{
  if(n == 1) return 2;

  return 2*potenza_ric(n-1);
}

double produttoria_ite(int a, int b)
{
  double ris = 1;

  for(int i=a; i<=b/2; i++)
  {
    ris = ris*potenza_ric(i)/a;
  }

  return ris-b;
}

void main()
{

  int a = -1;
  int b;

  while(a <= 0)
  {
    printf("Primo numero (>0): ");
    scanf("%d", &a);
    printf("\n");
  }
    
  printf("Secondo numero: ");
  scanf("%d", &b);
  printf("\n");
  
  printf("Il risultato e': %lf\n",produttoria_ite(a, b));
}