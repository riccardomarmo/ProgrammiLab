#include <stdio.h>
#include <stdlib.h>

int F1(int a[], int n)
{
    int k = 0;
    
    for(int i=0; i<n; i++)
        {
            for(int j=i; j>0; j--)
                {
                    if(a[i] == a[j] && j != i)
                    {
                        k++;                    
                    }
                }
        }

    int *p = (int *)malloc(k * sizeof(int));

    
}

void main()
{

    

}