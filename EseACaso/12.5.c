#include <stdio.h>

void inverti(int a[], int dim)
{

    int n_dim = dim/2;
    dim--;
    
    for(int i = 0; i<n_dim; i++)
        {
            int tmp = a[i];
            a[i] = a[dim-i];
            a[dim-i] = tmp;
        }
}

void main()
{
    int dim = 0;

    printf("Dimensione: ");
    scanf("%d", &dim);
    printf("\n");

    int a[dim];
    
    for(int i = 0; i<dim; i++)
        {
            printf("Numero %d: ", i+1);
            scanf("%d", &a[i]);
            printf("\n");
        }

    inverti(a, dim);

    for(int i = 0; i<dim; i++)
        {
            printf("Risultato: %d\n", a[i]);
        }
    
    
}