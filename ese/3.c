#include <stdio.h>

void somma_armonica(int n, double *h)
{
    int somma = 0;
    
    if(n == 1)
        *h = 1.0;
    else
    {
        somma_armonica(n-1, h);
        *h = 1.0 / n + *h;
    }
}

void main()
{
    double h = 0;
    
    somma_armonica(5, &h);
    
    printf("Risultato: %lf\n", h);
}