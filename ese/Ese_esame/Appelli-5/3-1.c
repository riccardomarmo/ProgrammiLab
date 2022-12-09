#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int length;
    int *array;
    struct Nodo *next;
};


typedef struct Nodo elementoLista;
typedef elementoLista * lista;

/* --------------------------------------- */

void stampa_lista(lista a)
{

    if(a == NULL) 
    {    
        printf("FINE\n");
        return;
    }

    printf("\tARRAY %d\n", a->length);

    for(int i = 0; i < a->length; i++)
    {
        printf("elem: %d\n", a->array[i]);
    }

    stampa_lista(a->next);
}


int num_elem(lista a)
{
    int conta = 0;
    while (a != NULL)
    {
        a = a->next;
        conta++;
    }
    return conta;
}

lista scorri_lista(lista a)
{
    while (a->next != NULL)
    {
        a = a->next;
    }
    return a;
}

int ntot(lista a)
{
    int ntot = 0;
    while(a != NULL)
    {
        ntot += a->length;
        a = a->next; 
    }

    return ntot;
}

int largest(lista a)
{
    int largest = a->length;
    while(a != NULL)
    {
        if(largest < a->length) largest = a->length;
        a = a->next; 
    }

    return largest;
}

lista init(lista a, int len)
{
    elementoLista * nuovo = malloc(sizeof(elementoLista));
    elementoLista *coda = malloc(sizeof(elementoLista));
    int *vet = malloc(sizeof(int)*len);

    lista testa = a;

    int conta = num_elem(a);

    if (conta == 0)
    {
        for(int i=0; i<len; i++)
        {
            vet[i] = rand() % 100;
        }
        
        a = nuovo;

        nuovo->array = vet;
        nuovo->next = NULL;
        nuovo->length = len;

        return a;
    }
    

    for(int i=0; i<len; i++)
    {
        vet[i] = rand() % 100;
    }
    
    nuovo->array = vet;
    nuovo->next = NULL;
    nuovo->length = len;

    a = scorri_lista(a);

    a->next = nuovo;

    return testa;
}


void main()
{
    lista a = NULL;

    a = init(a, 5);

    a = init(a, 4);

    a = init(a, 10);

    a = init(a, 2);

    stampa_lista(a);

    printf("\n\tNTOT: %d\n", ntot(a));

    printf("\n\tLargest: %d\n", largest(a));
}