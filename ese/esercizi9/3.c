#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int info;
    struct Nodo *next;
};

typedef struct Nodo elementoLista;
typedef elementoLista * lista;

lista crea_lista()
{
    lista a = NULL;
    int n; 

    printf("Inserisci un numero: ");
    scanf("%d",&n);

    if(n == -1)
        return a;

    elementoLista * nuovo = malloc(sizeof(elementoLista));
    (*nuovo).info = n;

    (*nuovo).next = NULL;

    a = nuovo;

    elementoLista * coda;
    coda = nuovo;

    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    while(n != -1)
        {
            
            nuovo = malloc(sizeof(elementoLista));
            
            (*nuovo).info = n;
        
            (*nuovo).next = NULL;

            (*coda).next = nuovo;

            coda = nuovo;
            
            printf("Inserisci un numero: ");
            scanf("%d",&n);
        }

    return a;
    
}

lista scorri_lista(lista a)
{
    while(a->next != NULL)
        {
            a = a->next;
        }
    return a;
}

void unisci_lista(lista a, lista b, int j)
{
    lista coda;
    
    if(j <= 0)
    {
        coda = scorri_lista(b);

        coda->next = a;
    }
    else
    {
        coda = scorri_lista(a);

        coda->next = b;
    }
}

void stampa_lista(lista a)
{
    if(a == NULL) return;

    printf("%d\n", a->info);

    stampa_lista(a->next);
    
}


void main()
{
    lista a = crea_lista();
    lista b = crea_lista();

    int j = 2;
    
    unisci_lista(a,b,j);

    if(j<=0)
        stampa_lista(b);
    else
        stampa_lista(a);
}