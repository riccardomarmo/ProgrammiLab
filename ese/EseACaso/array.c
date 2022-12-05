#include <stdio.h>

void main()
{

  int a[5];

  for(int i=0; i<5; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      a[i] = n;
    }

  for(int i=0; i<5; i++)
    {
      if(a[i]%2 == 0)
      {
        a[i] = 0;
      }
      else
      {
        a[i] = 1;
      }
      
      if(a[i] < 0)
        a[i] = -a[i];
    }

    for(int i=0; i<5; i++)
      {
        printf("Posizione %d: %d\n", i, a[i]);
      }
}