#include <stdio.h>

int ricerca(int a[], int n, int x)
{
    if(n == 0) return 0;
    
    if(x > a[n]) return 1;

    return ricerca(a, n-1, x);
}

int F1(int a[], int n)
{
    int i = 0;
    
    while(i<n)
        {
            if(ricerca(a, i, a[i]) == 1) return 1;
            
            i++;
        }

    
}