#include <iostream>

bool busca(int *vetor, int n_elementos, int chave){

    int ii;

    while (ii < n_elementos)
    {
        if (vetor[ii]==chave)
        {
            return true;
        } else
        {
            ii++;
        }
        
    }
    
    return false;
}


int main(int argc, char *argv[]){

    int vetor_entrada[8] = {2,7,9,1,4,3,5,6};

    std::cout << "Os numeros do vetor são: ";
    for (int i = 0; i < 8; i++)
    {
        std::cout << vetor_entrada[i] << " "; 
    }

    busca(vetor_entrada, 8, 8);
    
    

    return 0;
}