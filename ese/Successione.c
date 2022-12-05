#include <stdio.h>

double a_n(int n)
{
  double base = 1/2;

  printf("a_1 : %lf\n", base);
  
  for(int i = 2; i<=n; i++)
  {
    base = (base + 1)/2; 

    printf("a_%d: %lf\n",i, base);
  }
  
}

void main()
{
  int n;
  
  printf("Inserire l'indice: ");
  scanf("%d",&n);
  printf("\n");
  
  a_n(n);
}