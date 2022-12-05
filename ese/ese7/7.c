#include <stdio.h>

int F1(int a[], int n, int k)
{
    for(int i=0; i<n-2; i++)
        {
            if(k == (a[i]+a[i+1]+a[i+2])) return 1;
        }
    
    return 0;
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

    if(F1(a,n,7) == 1)
        printf("Trovato\n");
    else
        printf("Non trovato\n");
}