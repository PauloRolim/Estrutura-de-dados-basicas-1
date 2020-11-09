#include <iostream>

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


int main(){

    int vetorEntrada[6] = {2,3,5,6,8,9};

    if (buscaBinariaPlus(vetorEntrada, 6, 6) == true)
    {
        std::cout << "Achei mizera!" << std::endl;
    } else
    {
        std::cout << "Não achei..." << std::endl;
    }
    
    

    return 0;
}