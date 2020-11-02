#include <iostream>

bool buscaProgressiva(int *vetor, int n_elementos, int chave){

    if (n_elementos <= 0)
    {
        return false;
    }

    for(int ii = 0; ii < n_elementos; ii++)
    {      
        if (vetor[ii]==chave)
        {
            return true;
        } else
        {
            return false;;
        }
    }   

    return false;
}

bool buscaRegressiva(int *vetor, int n_elementos, int chave){

    if (n_elementos <= 0)
    {
        return false;
    }

    for(int ii = n_elementos - 1; ii >= 0; ii--)
    {
        if (vetor[ii]==chave)
        {
            return true;
        } else
        {
            return false;;
        }
    }   

    return false;
}

bool busca_recursiva(int *vetor, int n_elementos, int chave){

    if (n_elementos <= 0)
    {
        return false;
    }

    if (vetor[0] == chave)
    {
        return true;
    }   

    return busca_recursiva(vetor+1, n_elementos-1, chave);
}


int main(int argc, char *argv[]){

    int vetor_entrada[8] = {2,7,9,1,4,3,5,6};

    std::cout << "Os numeros do vetor são: ";
    for (int i = 0; i < 8; i++)
    {
        std::cout << vetor_entrada[i] << " "; 
    }

    bool condicao;

    std::cout << " " << std::endl;

    if (busca_recursiva(vetor_entrada, 8, 2) == true)
    {
        std::cout << "Número encontrado!"<< std::endl;
    } else
    {
        std::cout << "Número não encontrado."<< std::endl;
    }  

    return 0;
}