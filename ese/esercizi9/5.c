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
    if(a == NULL) return;

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
            if(k == a->info) return 1;
            a = a->next;
        }
    return 0;
}


lista sotto_lista(lista a, int k)
{
    lista below_list = NULL;
    
    while(a->next != NULL)
    {
        if(k == a->info) return a; //non crea una nuova lista
        
        a = a->next;
    }
}


void main()
{
    lista a = crea_lista();

    int presente = 0;
    while(presente == 0)
    {
            
        int k = 0;
        printf("Valore da inserire: ");
        scanf("%d", &k);
        printf("\n");
    
        if(cerca_elem(a, k)) // controlla che il valore sia nella lista
        {
            lista below_list;
            below_list = sotto_lista(a, k);
    
            stampa_lista(below_list);

            presente = 1;
        }
        else
        {
            printf("Valore non presente nella lista\n");    
        }
    }
    
}