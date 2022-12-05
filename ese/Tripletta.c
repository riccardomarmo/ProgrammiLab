#include <stdio.h>


void tripletta(int x, int y)
{

  
  if(x > y)
  {
    for(int i = 0; i <= x; i++)
    {
      printf("La tripletta (%d, %d, %d) e': %d \n",x, y, i,  min(x, y, i)); 
    }
  }  
  else
  {
    for(int i = 0; i <= y; i++)
      {
        printf("La tripletta (%d, %d, %d) - minimo -> %d \n",x, y, i,  min(x, y, i)); 
      }
  }

}


int min(int x, int y, int z)
{

  if(x < y)
  {
    
    if(x < z)
    {
     return x;
    }
    else
    {
      return z;
    }
    
  }//primo if
  else
  {
    return y;
  }

  return 0;
}





void main()
{

  int x, y, z;
  
  printf("Primo numero: ");
  scanf("%d", &x);
  printf("\n");

  printf("Secondo numero: ");
  scanf("%d", &y);
  printf("\n");

  printf("Terzo numero: ");
  scanf("%d", &z);
  printf("\n");


  printf("Il minimo tra (%d, %d, %d) e' %d\n",x, y, z, min(x,y,z));

  tripletta(x,y);
  
}