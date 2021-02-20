#include <stdio.h>

int main(int argc, char *argv[]){

    int L1[4] = {2,5,5,5};
    int L2[6] = {2,2,3,5,5,7};

    int tamanho = 0;
    
    int len_L1 = sizeof(L1) / sizeof(L1[0]);
    int len_L2 = sizeof(L2) / sizeof(L2[0]);

    for (int ii = 0; ii < len_L1; ii++)
    {
        for (int jj = 0; jj < len_L2; jj++)
        {
            if (L2[jj] == L1[ii])
            {
                tamanho++;

            }
            
        }
        
    }
    
    int L3[tamanho];

    for (int ii = 0; ii < len_L1; ii++)
    {
        for (int jj = 0; jj < len_L2; jj++)
        {
            if (L2[jj] == L1[ii])
            {
                L3[ii] = L2[jj];

            }
            
        }
        
    }

    printf("L3 = {%d,%d,%d}\n", L3[0], L3[1], L3[2]);

    return 0;
}