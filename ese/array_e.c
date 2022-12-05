#include <stdio.h>

int F1(int a[], int n)
{
    int i = 0;
    int trovato = 0;
    
    while(i<n && !trovato)
        {
            if(a[i] < 0) trovato = 1;
            i++;
        }

    return trovato;
}

int F2(int a[], int n)
{
    return(F1(a,n) == 1);
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

    
}



