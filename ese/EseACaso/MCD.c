#include <stdio.h>

void main()
{

  int g, h;
  
  printf("Inserire il primo valore intero: ");
  scanf("%d", &g);
  printf("\n");  
  
  printf("Inserire il secondo valore intero: ");
  scanf("%d", &h);

  if(g>0 && h>0)
  {
    while(g != h)
      {
        if(g > h)
        {
          g = g - h;
        }
        else
        {
          h = h - g;
        }
      } // fine while
  }

  printf("\n Il MCD e': %d \n", g);
  
}