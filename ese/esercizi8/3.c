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

int * unisci_array(int a[], int b[], int n, int m)
{

    int dim = n+m;
    
    int *p = (int *)malloc(sizeof(int) * dim);

    for(int i=0; i<dim; i++)
        {
            if(i<n) 
                p[i] = a[i]; // elementi primo array
            else
                p[i] = b[i-n]; // elementi secondo array
        }
    
    return p;
}

void main()
{
    int n = 5;
    int m = 6;
    int a[n];
    int b[m];

    inserisci_array(a,n);
    inserisci_array(b,m);
    
    int *p;
    
    p = unisci_array(a,b,n,m);

    
    for(int i=0; i<n+m; i++)
        {
            printf("Elem n.%d: %d\n", i, p[i]);
        }
    
    free(p);
}