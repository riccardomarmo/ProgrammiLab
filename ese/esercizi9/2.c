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

int length(lista a)
{
    if(a == NULL) return 0;

    return 1+length(a->next);
}

void main()
{
    lista a = crea_lista();

    printf("Lunghezza: %d\n", length(a));
}