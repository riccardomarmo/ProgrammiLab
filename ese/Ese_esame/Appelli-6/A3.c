#include <stdio.h>
#include <stdlib.h>

double ric(double x)
{
    if(x == 1.0) return 12;

    if(x == 0.0) return 1;

    double ris = 3*(ric(x-1) - ric(x-2)) + (ric(x-2) - ric(x-1))*(x - 12);

    return ris;
}


double ite(int a[], int n)
{
    double ris = 0.0;

    for(int i = 0; i<n; i++)
    {
        ris += ric(a[i]); 
    }
    return ris;
}

void main()
{
    int n = 3;
    int a[n];

    for(int i=0; i<n; i++)
    {
      int c = 0;
      
      printf("Numero: ");
      scanf("%d", &c);
      printf("\n");
      
      a[i] = c;
    }

    printf("Risultato: %lf\n", ite(a, n));
}