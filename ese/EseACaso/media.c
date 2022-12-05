#include <stdio.h>

void main()
{
  int termina = 1;
  int n = 0;
  float media = 0;

  while(termina != 0)
  {
    int val = 0;

    printf("Inserisci il valore numero %d: ", n);
    scanf("%d", &val);
    printf("\n");
    
    media = val + media;

    printf("Inserire 0 per terminare: ");
    scanf("%d", &termina);
    
    n++;
  }

  media = media / n;

  printf("\n La media e': %f\n",media);
  
}