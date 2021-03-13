#include <stdio.h>

int main(){

    int x;
    int vetor[4] = {1,2,5,7};

    int z = 0;
    int i = 0;
    int f = 0;

    while (z == 1 & i == 4)
    {
        i = i+1;
        if (x == vetor[i])
        {
            z = 1;
        }
        if (z == 1)
        {
            f = i;
        }
        
    }
    
    printf("%d\n", f);

    return 0;
}