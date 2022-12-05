#include <stdio.h>

int Contadino(int a, int b)
{
  int p = 0;
  
  while(a != -1)
    {
      
      if(a==0){return p;}

      if(a%2 != 0) 
      {
        p = p+b;  
      }
  
      a = a/2;
      b = b*2;
    }
    
    return p;
}  

void main()
{

  int a = 0;
  int b = 0;
  
  printf("Primo numero: ");
  scanf("%d", &a);

  printf("Secondo numero: ");
  scanf("%d", &b);

  int ris = Contadino(a,b);

  printf("\nIl risultato e' %d \n", ris);
  
  
}


