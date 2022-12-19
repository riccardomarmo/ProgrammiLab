#include <stdio.h>
#include <stdlib.h>

struct Nodo{
    int info;
    struct Nodo *next;
    
};

typedef struct Nodo elementoLista;
typedef elementoLista *lista; // puntatore ad elemento lista

lista crea_lista()
{
    int end = 0;

    lista a = NULL;

    elementoLista *nuovo = malloc(sizeof(elementoLista));
    elementoLista *prec = malloc(sizeof(elementoLista));

    printf("Numero: ");
    scanf("%d",&end);
    printf("\n");

    if(end == -1)
        return a;

    int num = rand()%100;

    nuovo->info = num;
    nuovo->next = NULL;

    prec = nuovo;
    a = nuovo;

    printf("Numero: ");
    scanf("%d",&end);
    printf("\n");

    while(end != -1)
    {

        elementoLista *nuovo = malloc(sizeof(elementoLista));
         
        nuovo->info = num;
        nuovo->next = NULL;

        prec->next = nuovo;

        prec = nuovo;
        
        printf("Numero: ");
        scanf("%d",&end);
        printf("\n");
    
    }   

    return a;
}

void stampa_lista(lista a)
{
    if(a==NULL)
    {
        printf("FINE\n");
        return;
    }

    printf("Valore: %d\n", a->info);

    stampa_lista(a->next);
}

int max_value(lista a, int max)
{
   if(a == NULL) return max;

   if(a->info > max) max = a->info;

   max_value(a->next, max);
}

void main()
{
    lista a = crea_lista();

    stampa_lista(a);

    int max = max_value(a, a->info);

    printf("Il massimo e': %d\n", max);
}









