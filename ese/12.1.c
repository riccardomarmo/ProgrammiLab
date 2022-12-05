#include <stdio.h>

double media(int v[], int dim)
{
    double media = 0;
    
    for(int i=0; i<=dim; i++)
        {
            media = v[i] + media;        
        }


    return media / dim;
}


double potenza(double a, double b)
{
  double ris = a;
  
  for(int i = 1; i<b; i++)
  {
    ris = ris*a;
  }

  return ris; 
}

double var(int a[], int n)
{
    double o = 0;
    double m = media(a, n);
    int somma = 0;

    for(int i = 0; i < n; i++)
        {
            somma += potenza(a[i]-m, 2);
        }

    o = somma / n;

    return o;
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

    printf("Risultato: %lf\n", var(a, dim));
}