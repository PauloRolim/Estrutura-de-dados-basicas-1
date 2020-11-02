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

    if (n_elementos == 0)
    {
        return false;
    }

    int ii = n_elementos / 2;

    if (vetor[ii] == chave)
    {
        return true;
    }
    

    

    return false;
}

int main(){

    int vetorEntrada[6] = {2,3,5,6,8,9};

    std::cout << 

    return 0;
}