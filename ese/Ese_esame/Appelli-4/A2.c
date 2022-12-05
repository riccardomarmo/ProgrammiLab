#include <stdio.h>

int is_prime(int n, int i)
{
  
  if(i == 0) return 1;
  
  //caso base
  //ritorna 0 se il numero non è primo
  if(i != n && i != 1 && n%i == 0) return 0; 

  return is_prime(n, i-1);
}

int myFunction(int x, int y)
{
  int k = 0;
  
  for(int i = x; i<=y; i++)
    {

      //printf("%d ",i);
      
      if(is_prime(i,y) != 0)
      {
        //printf("Primo");
        k++;
      }
      //printf("\n");
    }

  return k-1; // elimino il caso 2
}

void main()
{

  int x, y;
  
  printf("Numero: ");
  scanf("%d", &x);
  printf("\n");

  printf("Numero: ");
  scanf("%d", &y);
  printf("\n");

  printf("Tra %d e %d ci sono %d numeri primi\n",x, y, myFunction(x,y));
  
}