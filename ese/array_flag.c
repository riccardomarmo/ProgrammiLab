#include <stdio.h>

int ricerca(int a[], int n, int x)
{
    int i = 0;
    int trovato = 0;

    while(i<n && !trovato)
        {
            if(a[i] == x) trovato = i;
            i++;
        }

    if(trovato == n) return 0;

    return trovato;
}

int indice(int a[], int n, int x)
{
    
    int indice = ricerca(a,n,x);
    
    if(indice == 0) 
        return -1;
    else
        return indice;
    
}

void main()
{

    int n = 5;
    int a[n]; 

    for(int i=0; i<5; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      a[i] = n;
    }
    
    int indice = indice(a,n,6)

    if(indice == -1)
        printf("Non trovato");
    else
    {
        printf("Trovato");
        printf("Indice: %d", indice);
    }
}













