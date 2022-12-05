#include <stdio.h>

int F1(int a[], int n)
{
    int trovato = 0;
    
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                {
                    /*viene trovato un numero uguale ad un altro ma 
                            in posizioni diverse*/
                    if(a[i] == a[j] && i != j) trovato = 1;
                }
        }
    return trovato;
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

    if(F1(a,n) == 1)
    {
        printf("Nell'array ci sono valori uguali tra loro\n");
    }
    else
    {
        printf("I valori sono tutti diversi\n");
    }
}