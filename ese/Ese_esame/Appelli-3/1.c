#include <stdio.h>

int lenght(int n)
{
  int i = 0;
  
  while(n != 0)
  {
    n = n / 10;

    i++;
  }

  return i;
}


int f(int n)
{
  int n_c = 0;
  
  while(n != 0)
  {
    int molt = 1;
    //int lung = 0; 
    int tmp = 0;
    
    tmp = n % 10; // prendo il valore

    //lung = lenght(n); // calcolo la lunghezza di n
 
    for(int j = 1; j<lenght(n); j++)
    {
      molt = molt * 10;
    }
    
    n_c += tmp * molt;
    
    n = n / 10;

  }

  return n_c;
}

void main()
{
  int n = 0;
  
  printf("Numero: ");
  scanf("%d", &n);
  printf("\n");

  printf("Risultato: %d\n", f(n));
  
}