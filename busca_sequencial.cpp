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
            std::cout << "achei, mizera!";
            return true;
        } else
        {
            return false;
        }
    }   

    return false;
}

bool buscaRegressiva(int *vetor, int n_elementos, int chave){

    if (n_elementos <= 0)
    {
        return false;
    }

    if (vetor[n_elementos - 1] == chave)
    {
        return true;
    }
    
    for(int j = n_elementos-1; j >= 0; j--)
    {
        if (vetor[j]==chave)
        {
            std::cout << "achei, mizera!";
            return true;
        } else
        {
            return false;
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

    int vetor_entrada[7] = {2,7,9,1,4,3,5};

    std::cout << "Os numeros do vetor são: ";
    for (int i = 6; i >= 0; i--)
    {
        std::cout << vetor_entrada[i] << " "; 
    }

    std::cout << " " << std::endl;

    if (buscaProgressiva(vetor_entrada,7,5) == true)
    {
        std::cout << "Número encontrado!"<< std::endl;
    } else
    {
        std::cout << "Número não encontrado."<< std::endl;
    }  

    return 0;
}