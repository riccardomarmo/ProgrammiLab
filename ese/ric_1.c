#include <stdio.h>


int ricorsione(int n)
{
  if(n < 10) return n;


  int somma = 0;
  int ntemp = n;
  
  while(ntemp != 0)
  {
    somma = somma + ntemp%10;
    ntemp = ntemp/10;
  }

  if(somma%2 == 0)
  {
    return ricorsione(somma);  
  }
  else
  {
    return ricorsione(n-1);
  }
  
}

void main()
{
  int x;

  printf("Primo numero: ");
  scanf("%d", &x);
  printf("\n");

  printf("Risultato: %d\n", ricorsione(x));

}