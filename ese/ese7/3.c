#include <stdio.h>

int prodotto_scalare(int a[], int b[], int n)
{
    int somma = 0;
    
    for(int i=0; i<n; i++)
        {
            int prodotto = a[i] * b[i];
            somma += prodotto;   
        }
    
    return somma;
}

void main()
{
    int n = 5;
    int a[n];
    int b[n];

    for(int i=0; i<5; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      a[i] = n;
      b[i] = n;  
    }
    
    printf("Risultato: %d\n",prodotto_scalare(a,b,n));
}