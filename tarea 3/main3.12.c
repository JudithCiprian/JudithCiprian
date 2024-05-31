#include <stdio.h>
#include <stdlib.h>

//serie de ULAM, el progrma al recibir como dato entero positivo obtiene y escribe la serie de ULAM



int main()
{
    int NUM;
    printf("ingrese el numero para calcular la serie:");
    scanf("%d", &NUM);
    if(NUM > 0)
    {
        printf("\nserie de ULAM\n");
        printf("%d\t", NUM);
        while(NUM != 1)
    {
        if (pow (-1, NUM)> 0)
        NUM = NUM/ 2;
        else
        NUM = NUM*3 +1;
         printf("%d\ t", NUM);

    }
    }

        else
    printf("\n NUM debe ser un entero positivo");
    return 0;
}
