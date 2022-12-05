#include <stdio.h>
#include <limits.h>

void main()
{
  int termina = 1;
  int max = INT_MIN;
  int min = INT_MAX;
  int n = 0;
  
  while(termina != 0)
  {

    int temp = 0;
    
    printf("Inserisci il valore numero %d: ", n);
    scanf("%d", &temp);
    printf("\n");

    
    if(temp > max)
    {
      max = temp;
    }
    
    if(temp < min)
    {
      min = temp;
    }
    
    printf("Inserire 0 per terminare: ");
    scanf("%d", &termina);

    n++;
  }


  printf("\n Il massimo e il minimo sono rispettivamente: %d e %d\n",max, min);
  
}