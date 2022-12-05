#include <stdio.h>

int vet_min(int a[], int n, int k)
{

    int min = a[k];
    
    for(int i=k; i<n; i++)
        {
            if(min > a[i+1] && i < n-1) min = a[i+1];
            printf("MIN: %d,%d\n",min,a[i]);
        }
    return min;
}


void main()
{
    int n = 5;
    int a[n];

    for(int i=0; i<n; i++)
    {
      int y = 0;
      
      printf("Numero: ");
      scanf("%d", &y);
      printf("\n");
      
      a[i] = y; 
    }

    int k = 0;
    printf("K: ");
    scanf("%d", &k);
    printf("\n");
    
    printf("Numero minore [k=%d]: %d\n", k, vet_min(a,n, k));
}