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

lista inserisci_valore(lista a, int k)
{

    elementoLista * testa = malloc(sizeof(elementoLista));

    testa = a;
    
    // caso k nuova testa (Funziona)
    if(k < a->info)
    {
        elementoLista * nuovo = malloc(sizeof(elementoLista));
        
        nuovo->info = k; //valore asseganto al nuovo elem
    
        nuovo->next = a; // nuovo punta alla vecchia testa
        
        testa = nuovo; // nuovo diventa la nuova testa

        printf("Info Testa: %d\n", nuovo->info);
        
        return testa;
    }

    
     // caso k in mezzo alla lista
     while(a != NULL)
        {
            
            if(a->next == NULL && a->info < k)
            {
                // caso k in coda
                
                elementoLista * nuovo = malloc(sizeof(elementoLista));
                
                nuovo->info = k; //valore asseganto al nuovo elem
        
                nuovo->next = NULL; // nuovo punta a NULL e diventa la nuova coda
                a->next = nuovo; // la vecchia coda punta a nuovo

                return testa;
            }
            

            //caso in cui sia in mezzo
            if(k < a->next->info)
            {
                
                elementoLista * nuovo = malloc(sizeof(elementoLista)); 

                nuovo->info = k; //valore asseganto al nuovo elem
                
                nuovo->next = a->next; // il nuovo valore punta al valore puntato da a
                
                a->next = nuovo; // a punta al nuovo valore

                return testa;
            }

            
            a = a->next;
        }
}


void main()
{
    lista a = crea_lista();

    int k = 0;
    printf("Valore da inserire: ");
    scanf("%d", &k);
    printf("\n");
    
    a = inserisci_valore(a, k);

    stampa_lista(a);
}