#include <stdio.h>

int potenza_ite(int a, int b)
{
  int ris = a;
  
  for(int i = 1; i<b; i++)
  {
    ris = ris*a;
  }

  return ris; 
}

int potenza_ric(int a, int b)
{ 
  if(b == 1) return a;

  return a*potenza_ric(a, b-1);
}

int test()
{

  for(int i = 1; i<=5; i++)
    {
      for(int j = 5; j>=1; j--)
        {
          printf("La coppia (%d %d): %d\n",i, j, potenza_ric(i, j));
        }
    }
}

void main()
{
  int numero = 0;
  int pot = -1;
  
  //numero da elevare
  printf("Inserire il numero che si vuole elevare: ");
  scanf("%d", &numero);
  printf("\n");

  
  //potenza 
  while (pot <= 0)
  {
    printf("Inserire il numero della potenza (maggiore di 0): ");
    scanf("%d", &pot);
    printf("\n");
  }


  printf("Il risultato (ite/ric) e': %d e %d\n", potenza_ite(numero, pot), potenza_ric(numero, pot) );

  test();
  
}