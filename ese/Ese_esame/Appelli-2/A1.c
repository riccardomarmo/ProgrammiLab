#include <stdio.h>

double successione_ite(int n)
{
  double successione;
  double a_0 = 1;
  double a_1 = 2; 

  if(n == 0) return 1;
  if(n == 1) return 2;
  
  for(int i = 2; i<=n; i++)
  {
    // se n è pari
    if(i%2 == 0)
    {
      successione = (i + 3*(a_0-2)) / a_1;
    }
      
    // se n è dispari
    if(i%2 != 0)
    {
      successione = (i + 3*(a_1-2)) / a_0;
    }
    
    a_0 = a_1;
    a_1 = successione;
    
  }

  return successione;
}


void main()
{
  
 int numero;
  
  printf("Inserire il numero: ");
  scanf("%d", &numero);
  printf("\n");

  printf("Risultato: %lf\n", successione_ite(numero));
}