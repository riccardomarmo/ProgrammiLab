#include <stdio.h>
#include <stdlib.h>

int search(int a[], int from, int to, int elem)
{
    int med = (from + to)/2;

    /*
    printf("Med: %d\n", med);
    printf("a[Med]: %d\n", a[med]);
    printf("dif: %d\n", (to - from));
    */
    
    
    if(elem == a[med]) return 1; // trova il valore

    if((to - from) <= 1) return 0; // non trova il valore

    if(elem > a[med])
        return search(a, med, to, elem);
    else
        return search(a, 0, med, elem);

}

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


void main()
{
    int n = 7;
    int *a = (int *)malloc(sizeof(int) * n);
    
    inserisci_array(a,n);

    int elem = 0;
    printf("Elemento da cercare: ");
    scanf("%d", &elem);
    printf("\n");

    int c = search(a, 0, n, elem);

    if(c != 1) 
        printf("Non trovato\n");
    else
        printf("Trovato\n");
    
    free(a);
}