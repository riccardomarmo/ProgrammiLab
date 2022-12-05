#include <stdio.h>

int somma_triangolare(int n)
{
    int somma = 0;
    
    for(int i=1; i<=n; i++)
        {
            somma += i;        
        }
    
    return somma;
}

void F1(int a[], int n)
{
    for(int i=0; i<n; i++)
        {
            a[i] = somma_triangolare(i+1);
        }
}

void main()
{
    int n=5;
    int a[n];

    F1(a,n);

    for(int i=0; i<n; i++)
    {
      
      printf("Numero: %d\n",a[i]);
      
    }
}