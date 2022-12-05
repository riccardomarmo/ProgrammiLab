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

//Funzione ausiliaria
int conta_elem(int a[], int n, int elem)
{
    int conta = 0;
    
    for(int i=0; i<n; i++)
        {
            if(elem == a[i]) conta++;      
        }
    return conta;
}


//Funzione principale
void counting_sort(int a[], int n, int k)
{
    int *C = (int *)malloc(sizeof(int) * k);

    for(int i=0; i<k; i++)
        {
            C[i] = conta_elem(a,k,a[i]);
        }

/*    for(int i=0; i<n; i++)
        {
            if(i<k)
            {
                for(int j=0; j<k; j++)
                    {
                        if(C[i] > C[j])
                            
                    }
            }
            else
                a[i] = 0;
        }*/
    
    free(C);
}


void main()
{
    int n = 8;
    int a[n];
    
    inserisci_array(a,n);

    counting_sort(a, n, 6);
}