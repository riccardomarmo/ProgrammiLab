#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverti(int n, char b[], char bTmp[])
{
    int tmp = n-1;
    printf("N: %d\n", n);
    for(int i = 0; i<n; i++)
    {
        bTmp[i] = b[tmp];
        
        tmp--; 
    }
}

int palin(char a[])
{
    int Bool = 0;

    int n = strlen(a);

    char aTmp[n];

    inverti(n, a, aTmp);  

  
    //int s = n-1;
    
    for(int i = 0; i<n; i++)
    {
        printf("S: %c\n", aTmp[i]);
        
    }

    printf("\n\n"); 

    for(int i = 0; i<n; i++)
    {
        printf("a: %c\n", a[i]); 
    }


    if(strcmp(aTmp, a) == 0)
    {
        Bool = 1;
        printf("Bool: %d\n", Bool);
    }


    return Bool;
}

void main()
{
    char b[] =  "aaccaa";
    char aa[] = "aaccaa";


    int b1 = palin(b);
    int a1 = palin(aa);

    printf("CIAO: %d\n", a1);    
    printf("CIAO: %d\n", b1);
}