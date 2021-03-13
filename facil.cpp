#include <stdio.h>

int main(){

    int vetor[10] = {0,2,5,7,1,9,6,5,11,52};
    int x;

    x = vetor[0];

    for (int i = 2; i <=10 ; i++)
    {
        if (x <= vetor[i])
        {
            x = vetor[i];
        }
        
    }
    
    printf("%d\n", x);

    return 0;
}