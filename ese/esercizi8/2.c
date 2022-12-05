#include <stdio.h>

int F1(int a[], int n, int j)
{
    for(int i=0; i<n; i++)
        {
            if(i<j && a[i]>j) return 1;
            if(i>j && a[i]<j) return 1;
        }
    
    return 0;
}


void main()
{
    int n = 5;
    int a[n];

    for(int i=0; i<n; i++)
        {
            printf("Numero: ");
            scanf("%d", &a[i]);
        }

    if(F1(a,n,3) == 1)
        printf("Falso\n");
    else
        printf("Vero\n");
}

