#include <stdio.h>

void areaTra(int somma, int differenza, double *area)
{
    double b = (somma - differenza) / 2;
    double B = somma - b;

    double altezza = b * (2.0/3.0);

    printf("b,B,alt: %lf,%lf,%lf\n",b,B,altezza);

    *area = ((B + b) * altezza) / 2;
    
}

void main()
{

    int somma, differenza;
    double area = 0;
    
    printf("Somma: ");
    scanf("%d", &somma);
    printf("\n");

    printf("Differenza: ");
    scanf("%d", &differenza);
    printf("\n");

    areaTra(somma, differenza, &area);
    
    printf("Area trapezio --> %lf\n", area);
    
}