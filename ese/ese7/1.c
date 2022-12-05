#include <stdio.h>

int somma_pari(int a[], int n)
{
    int somma = 0;

    for(int i = 0; i<n; i++)
        {
            if(a[i]%2 == 0) somma += a[i];
        }
    return somma;
}

int somma_pari_ric(int a[], int n)
{

    int somma = 0;
    
    if(n==0 && a[n]%2 == 0) return a[n]; // caso base pari
    if(n==0 && a[n]%2 != 0) return 0; // caso base dispari

    if(a[n]%2 == 0) somma = a[n];

    return somma + somma_pari_ric(a,n-1);
}


void main()
{
    int n = 5;
    int a[n];

    for(int i=0; i<5; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      a[i] = n;
    }

    printf("Risultato: %d--%d\n", somma_pari(a,n), somma_pari_ric(a,n));
}