#include <stdio.h>

void F1(int a[], int b[], int n)
{
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            {
                //printf("a i: %d\n",a[i]);
                //printf("a j: %d\n",a[j]);
                //printf("Resto: %d\n",a[i]%a[j]);
                if(a[i]%a[j] != 0 && j != i) 
                {
                    
                    //printf("Resto: %d\n",a[i]%a[j]);
                    flag = 1;
                }
                    
                if(flag)
                {
                    b[i] = a[i];
                    flag = 0;
                }
            }
    }
}

void main()
{
    int n = 5;
    int a[n];
    int b[n];

    for(int i=0; i<5; i++)
    {
      int n = 0;
      
      printf("Numero: ");
      scanf("%d", &n);
      printf("\n");
      
      a[i] = n;
    }

     F1(a,b,n);

    for(int i=0; i<n; i++)
    {
      printf("Numero: %d\n",b[i]);
    }
}