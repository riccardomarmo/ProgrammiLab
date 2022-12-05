/*

    Esercizio 7. 
    Si scriva una funzione che data la testa di una lista 
    di numeri interi 𝑎 ritorni la testa della lista invertita, 
    ossia i nodi sono collegati in ordine inverso, dall’ultimo al primo. 

*/


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

lista inverti_lista(lista a)
{

    lista testa = NULL;

    elementoLista * precedente = malloc(sizeof(elementoLista));
    elementoLista * nuovo = malloc(sizeof(elementoLista));


    nuovo->info = a->info;          //Il primo elemento della lista diventa la nuova coda 
    nuovo->next = NULL;             // quindi il next sarà NULL

    testa = nuovo;                  // Ogni nuovo elemento aggiunto diventerà la nuova testa

    precedente = nuovo;             // Salvo il precedente valore a cui punterà il nuovo elemento creato


    while(a->next != NULL)
    {

        a = a->next;

        nuovo = malloc(sizeof(elementoLista));

        nuovo->info = a->info;

        nuovo->next = precedente; 

        precedente = nuovo;     // ad ogni ciclo il valore precedente viene aggiornato con quello appena modificato

        testa = nuovo;          // E quindi la nuova testa sarà il nuovo valore
        
    }


    return testa;
}


void main()
{
    lista a = crea_lista();

    a = inverti_lista(a);

    printf("\n\t Lista Invertita \n\n");
    stampa_lista(a);
    
}