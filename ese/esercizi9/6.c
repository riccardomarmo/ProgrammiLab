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

int cerca_elem(lista a, int k)
{
    while(a->next != NULL)
        {
            a = a->next;
            if(k == a->info) return 1;
        }
    return 0;
}

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


lista elimina(lista a)
{   
    elementoLista * testa = malloc(sizeof(elementoLista));
    testa = a;
    
    while(a->next != NULL)
        {
            
            if(a == testa) // doppione in testa
            {
                if(cerca_elem(a, a->info)) testa = a->next; 
            }
            else
            {
                if(cerca_elem(a, a->info))
                {
                    a = scorri_lista(testa, a); // recupero l'elemento precedente del doppione
                    a->next = a->next->next;
                }
            
            }
            
            a = a->next;
        }
    
    return testa;
}


void main()
{
    lista a = crea_lista();
            
    a = elimina(a);

    stampa_lista(a);
    
}