#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int info;
    struct Nodo *next;
};

typedef struct Nodo elementoLista;
typedef elementoLista * lista;

/* ------------------------------------------ */

void stampa_lista(lista a)
{
    if(a == NULL) 
    {    printf("FINE\n");
        return;
    }
    
    printf("Valore: %d\n", a->info);

    stampa_lista(a->next);
}


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

// recupero l'elemento precedente dell'elemento dato
/*
lista scorri_lista(lista completa, lista a)
{
    while(completa->next != NULL)
    {
        if(completa->next->info == a->info)
            {
                return completa;
            }
        
        completa = completa->next;
    }

}
*/

lista scorri_lista(lista a)
{
    while(a->next != NULL)
        {
            a = a->next;
        }

    return a;
}

lista inverti_lista(lista a)
{

    lista invertita = NULL;

    elementoLista * precedente = malloc(sizeof(elementoLista));
    elementoLista * nuovo = malloc(sizeof(elementoLista));

    printf("a: %d\n", a->info);

    nuovo->info = a->info;
    nuovo->next = NULL;

    precedente = a;
    //a = a->next;

    while(a->next != NULL)
    {
        a = a->next;
        printf("a: %d\n", a->info);

        nuovo = malloc(sizeof(elementoLista));

        nuovo->info = a->info;
        nuovo->next = precedente;

        precedente = a;
        invertita = nuovo;
    }
    

    return invertita;
}


void main()
{
    lista a = crea_lista();
    
    //lista coda = scorri_lista(a);

    stampa_lista(a);
    //printf("CODA: %d\n", coda->info);

    a = inverti_lista(a);

    /*printf("sad: %d", a->info);
    printf("\n");*/

    stampa_lista(a);
    
}