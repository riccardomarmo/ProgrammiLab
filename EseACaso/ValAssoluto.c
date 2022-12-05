#include <stdio.h>

void main()
{
  
  float num = 0;
  
  printf("Inserire un numero: ");
  scanf("%f", &num);
  printf("\n");

  if(num >= 0)
  {
    printf("Il numero e' positivo.\n");

    printf("Numero: %f\n", num);
  }
  else
  {
    printf("Il numero e' negativo.\n");
    
    num = num-(num*2);
    
    printf("Numero: %f\n", num);

  }
  
}