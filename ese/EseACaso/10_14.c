#include <stdio.h>


int sequenza(int n)
{

    if(n == 1) 
    {
      printf("1\n");
      return n;
    }
    
    if(n%2 == 0)
    {
      printf("%d\n",n);
      return sequenza(n/2);
    }
      
      
    if(n%2 != 0)
    {  
      printf("%d\n",n);
      return sequenza((3*n)+1);
    }
  
}

void main()
{

  int numero = 0;
  
  printf("Inserire il numero: ");
  scanf("%d", &numero);
  printf("\n");

  sequenza(numero);
}