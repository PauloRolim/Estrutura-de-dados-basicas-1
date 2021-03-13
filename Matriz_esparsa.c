#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct node
{                       //estrutura basica de lista ligada, aplicada a matriz esparsa
    float valor;        
    int coluna;
    struct node* prox;
    
} NODE;

typedef NODE* PONTEIRO; //Arranjo de listas ligadas, cada umda delas representa uma linha da matriz

typedef struct 
{
    PONTEIRO* Arranjo; //ponteiro para o aranjo de listas ligadas,
    int linhas; //numero de linhas da mariz
    int colunas; //numero de colunas da matriz

} MATRIZ;

void inicializarMatriz(MATRIZ* m, int lin, int col)
{
    int i;
    m->linhas = lin;
    m->colunas = col;
    m->Arranjo = (PONTEIRO*) malloc(lin*sizeof(PONTEIRO));

    for (i = 0; i < lin; i++)
    {
        m->Arranjo[i] = NULL;
    }
    
}

bool inserirValor(MATRIZ* m, int lin, int col, float val) //função que insere valores na matriz
{
    if (lin < 0 || lin >= m->linhas || col < 0 || col >= m->colunas) //testa se o usuario passou um número de coluna ou linha inválido
    {
        return false;
    }
    
    PONTEIRO ant = NULL; // auxiliar para guardar a posição anterior da lista
    PONTEIRO atual = m->Arranjo[lin]; // auxiliar para guardar a posição posterior da lista 

    while (atual != NULL && atual->coluna < col) //se o numero da coluna e linha forem válidos 
    {
        ant = atual;
        atual = atual->prox;
    }
    
    if (atual != NULL && atual->coluna == col) //checa se o valor informado refere-se a um node que já existe
    {
        if (val == 0) //se o usuario for atribuir valor zero  precisamos excluir o node para liberar memória
        {       
            if (ant == NULL)
            {
                m->Arranjo[lin] = atual->prox;

            } else ant->prox = atual->prox;
            free(atual);

        } else atual->valor = val;

    }
        
    else if (val != 0)
    {
        PONTEIRO novo = (PONTEIRO) malloc(sizeof(NODE));
        novo-> coluna = col;
        novo-> valor = val;
        novo->prox = atual;
        if (ant == NULL)
        {
            m->Arranjo[lin] = novo;

        } else  ant-> prox = novo;  
    }      
    return true;
}
    

float verValor(MATRIZ *m, int lin, int col)
{
    if (lin < 0 || lin >= m->linhas || col < 0 || col >= m->colunas) //testa se o usuario passou um número de coluna ou linha inválido
    {
        return 0;
    }

    PONTEIRO atual = m->Arranjo[lin];
    
    while (atual != NULL && atual->coluna == col)
    {
        return atual->valor;
    }
    return 0;
}

int main(){

    MATRIZ mat;
    float saida;
    float saida2;

    inicializarMatriz(&mat, 3, 4);

    inserirValor(&mat, 1, 0, 2);
    inserirValor(&mat, 0, 1, 2);

    saida = verValor(&mat, 0, 1);
    saida2 = verValor(&mat, 1, 0);

    printf(" %f\n", saida);
    printf(" %f\n", saida2);

    return 0;

}