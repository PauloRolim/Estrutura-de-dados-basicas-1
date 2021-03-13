#include <stdio.h>


/*O vetor entrada está ordenado por valor dos elementos*/

bool buscaBinaria(int *vetor, int n_elementos, int chave){

    for (int ii = 0; ii < n_elementos; ii++)
    {
        if (vetor[ii] == chave)
        {
            return true;
        }

        if (vetor[ii] > chave)
        {
            return false;
        }
    }

    return false;
}

bool buscaBinariaPlus (int *vetor, int n_elementos, int chave){
    int pp = 0;
    int qq = n_elementos - 1;
    
    while (qq - pp + 1 > 0)
    {
        int ii = (pp + qq) / 2;

        if (vetor[ii] == chave)
        {
            return true;
        }

        if (vetor[ii] > chave)
        {
            qq = ii - 1;
        } else
        {
            pp = ii + 1;
        }
        
    }   

    return false;
}

int buscaIntersec (int *vetor1, int *vetor2, int *vetor_saida){

    //int tamanho = 0;

    int len_L1 = sizeof(*vetor1) / sizeof(vetor1[0]);
    int len_L2 = sizeof(*vetor2) / sizeof(vetor2[0]);

    /*for (int ii = 0; ii < len_L1; ii++)
    {
        for (int jj = 0; jj < len_L2; jj++)
        {
            if (vetor2[jj] == vetor1[ii])
            {
                tamanho++;

            }
            
        }
        
    }*/

    //int vetor_saida[tamanho];

    for (int ii = 0; ii < len_L1; ii++)
    {
        for (int jj = 0; jj < len_L2; jj++)
        {
            if (vetor2[jj] == vetor1[ii])
            {
                vetor_saida[ii] = vetor2[jj];

            }
            
        }
        
    }

    return *vetor_saida;
}

int main(int argc, char *argv[]){

    int L1[4] = {2,5,5,5};
    int L2[6] = {2,2,3,5,5,7};    
    int L3[3] = {0,0,0};

    buscaIntersec(L1,L2,L3);

    printf("L3 = {%d,%d,%d}\n", L3[0], L3[1], L3[2]);

    return 0;
}