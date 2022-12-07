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
  int n_temp = n;
  int n_c = 0;
  
  while(n_temp != 0)
  {
    int molt = 1;
    int lung = 0;
    int tmp = 0;
    
    tmp = n_temp % 10; // prendo il valore

    lung = lenght(n_temp); // calcolo la lunghezza di n
 
    for(int j = 1; j<lung; j++)
    {
      molt = molt * 10;
    }
    
    n_c = n_c + tmp * molt;
    
    n_temp = n_temp / 10;

  }

  return n_c;
}

void main()
{
  int n;
  
  printf("Numero: ");
  scanf("%d", &n);
  printf("\n");

  printf("Risultato: %d\n", f(n));
  
}