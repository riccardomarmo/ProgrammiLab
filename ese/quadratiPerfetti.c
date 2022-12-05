#include <stdio.h>
#include <math.h>

void main()
{
  int val_ut = 0;
  
  printf("Inserire un valore intero: ");
  scanf("%d", &val_ut);
  printf("\n");
  
  for(int i=1; i<=val_ut; i++)
  {
    int q = i*i;
    printf("il quadrato di %d e' %d\n", i, q);
  }

  
}