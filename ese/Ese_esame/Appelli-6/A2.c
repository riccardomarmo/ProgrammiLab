#include <stdio.h>
#include <stdlib.h>


int prod(int n)
{
    if(n%10 == 0) return 1;

    int ris = n%10;

    return ris*prod(n/10); 
}


void main()
{
    int n = 0;
    printf("Numero: ");
    scanf("%d", &n);
    printf("\n");

    int ris = prod(n);

    printf("Prodotto: %d\n", ris);

}