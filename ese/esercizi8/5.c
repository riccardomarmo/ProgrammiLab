#include <stdio.h>
#include <stdlib.h>

void inserisci_array(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int tmp = 0;
        
        printf("Numero: ");
        scanf("%d", &tmp);
        
        a[i] = tmp;
    }

    printf("Fine\n");
}

void ordina_array(int a[], int n)
{
    //int *p = (int *)malloc(sizeof(int) * n);

    for(int i=0; i<n; i++)
        {
            if(i%2==0 && a[i] < a[i+1]) // indice pari
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
            
            if(i%2!=0 && a[i] > a[i+1]) // indice dispari
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }

             printf("Ite %d: %d\n", i, a[i]);
        }
}


void main()
{
    int n = 7;
    int a[n];
    
    inserisci_array(a,n);

    ordina_array(a,n);

    for(int i=0; i<n; i++)
    {  
        printf("Numero: %d\n",a[i]);
    }
}