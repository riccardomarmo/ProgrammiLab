
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

/* ------------------------------------------ */

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
        printf("a: %d\n", a->array[i]);
    }

    stampa_lista(a->next);
}

lista ultimo_elem(lista a)
{
    while(a != NULL)
    {
        a = a->next;
    }
    return a;
}

lista crea_array(lista a) // serve l'ultimo elem e la lista
{

    int end = 0;
    int num = 0;
    int conta = 0;
    int len = 0;


    printf("Lunghezza: ");
    scanf("%d",&len);

    elementoLista * nuovo = malloc(sizeof(elementoLista));
    int * vet = malloc(sizeof(int) * len);

    while (conta < len)
    {
        
        printf("Inserisci un numero: ");
        scanf("%d",&num);
        
        vet[conta] = num;
        
        conta++;
            
    }
    
    nuovo->array = vet;
    nuovo->length = conta;
    nuovo->next= NULL;
    a = nuovo;
    
    elementoLista * coda = malloc(sizeof(elementoLista));

    coda = nuovo;

    while(end != -1)
    {

        conta = 0;
        len = 0;

        printf("Lunghezza: ");
        scanf("%d",&len);

        elementoLista * nuovo = malloc(sizeof(elementoLista));
        int * vet = malloc(sizeof(int) * len);

        while (conta < len)
        {
            
            printf("Inserisci un numero: ");
            scanf("%d",&num);
            
            vet[conta] = num;

            conta++;
                
        }
        
        nuovo->array = vet;
        nuovo->length = conta;
        nuovo->next = NULL;

        coda->next = nuovo;
        coda = nuovo;

        printf("Concludere/Continuare [-1/altro]: ");
        scanf("%d", &end);
        printf("\n");
    }

    return a;
}


void main()
{
    lista a = NULL;

    a = crea_array(a);

    stampa_lista(a);
}