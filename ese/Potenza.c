#include <stdio.h>

int potenza(int a, int b)
{
  int ris = a;
  
  for(int i = 1; i<b; i++)
  {
    ris = ris*a;
  }

  return ris; 
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

  int risultato = potenza(numero, pot);

  printf("Il risultato e': %d\n", risultato);

  
}