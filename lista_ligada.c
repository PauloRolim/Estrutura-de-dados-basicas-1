#include <stdio.h>
#include <stdlib.h>

struct node //estrutura basica para cada item da lista
{
    int valor;
    struct node *pLink;
};

void exibirItem(struct node *p) //função para mostrar na tela um item da lista
{
    printf("Itens da Lista:\n");
    if (p)
    {
        do
        {
            printf(" %d", p->valor);
            p = p->pLink;
            
        } while (p);
    } else
    {
        printf("Lista Vazia!\n");
    }
    printf("\n");
}


int main()
{
    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;

    pNode1 = (struct node*) malloc(sizeof(struct node*)); //criando um item da lista e atribuindo um valor
    pNode1-> valor = 10;

    pNode2 = (struct node*) malloc(sizeof(struct node*));
    pNode2-> valor = 25;

    pNode3 = (struct node*) malloc(sizeof(struct node*));
    pNode3-> valor = 35;

    pNode1 -> pLink = pNode2;
    pNode2 -> pLink = pNode3;
    pNode3 -> pLink = NULL;

    if (pNode1)
    {
        exibirItem(pNode1);
    }
    
    return 0;
}