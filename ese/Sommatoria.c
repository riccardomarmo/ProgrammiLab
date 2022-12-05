#include <stdio.h>


int potenza(int base, int esponente)
{
  int ris = base;
  
  for(int i = 1; i<esponente; i++)
  {
    ris = ris*base;
  }

  return ris; 
}

int sommatoria(int n, int k){

  int ris = 0;
  
  for(int i=1; i<=n; i++)
  {
      ris = ris + potenza(k, i);
  }

  return ris;
}



void main()
{

  int pot = 0;
  int base = 0;

  while(base <= 0)
  {
    //numero da elevare
    printf("Inserire il numero che si vuole elevare (maggiore di 0): ");
    scanf("%d", &base);
    printf("\n");
  }
  
  while (pot <= 0)
  {
    //potenza 
    printf("Inserire il numero della potenza (maggiore di 0): ");
    scanf("%d", &pot);
    printf("\n");
  }

  int risultato = sommatoria(pot, base);

  printf("Il risultato e': %d\n", risultato);

}