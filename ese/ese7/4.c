#include <stdio.h>

int F1(int a[], int b[], int n, int m)
{
    int somma = 0;
    int trovato = 0;

    for(int j=0; j<m; j++)
    {
        somma += b[j];
    }
    
    for(int i=0; i<n; i++)
        {
            if(a[i] == somma) trovato = 1;
        }
    
    return trovato;
}

void main()
{
    int n = 5;
    int m = 7;
    int a[n];
    int b[m];

    for(int i=0; i<n; i++)
    {
      int y = 0;
      
      printf("Numero: ");
      scanf("%d", &y);
      printf("\n");
      
      a[i] = y; 
    }

    for(int i=0; i<m; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      b[i] = n; 
    }

    if(F1(a,b,n,m) == 1)
        printf("Trovato\n");
    else
        printf("Non trovato\n");
    
}