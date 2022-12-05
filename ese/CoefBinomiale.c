#include <stdio.h>

int fattoriale(int k)
{
  int ris = 1;
  
  for(int i = k; i>0; i--)
  {
      ris = ris*i;
  }

  return ris;
}

int coeffiecienteBin(int k, int n)
{
  return (fattoriale(n)/(fattoriale(k)*fattoriale(n-k)));
}



void main()
{

  int n;
  printf("Inserire il primo numero: ");
  scanf("%d", &n);
  printf("\n");

  int k;
  printf("Inserire il secondo numero: ");
  scanf("%d", &k);
  printf("\n");

  
  if(n>=k)
  {
    int ris = coeffiecienteBin(k,n);

    printf("Coefficiente Binomiale: %d\n", ris);
  }
  else
  {
    printf("il risultato e' 0\n");
  }

}