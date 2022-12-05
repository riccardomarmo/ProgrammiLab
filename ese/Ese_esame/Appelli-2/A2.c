#include <stdio.h>

int sommaCifre_ric(int num)
{
  int somma;

  if(num%10 == 0) return somma; //caso base

  somma = num%10; //Recupero l'ultima cifra da num
  num = num / 10; //Tolgo l'ultima cifra da num

  return somma + sommaCifre_ric(num);
}

void main()
{
  int n;
  
  printf("Numero: ");
  scanf("%d", &n);
  printf("\n");
  
  printf("Risultato: %d\n", sommaCifre_ric(n));
}