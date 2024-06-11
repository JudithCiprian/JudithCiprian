#include <stdio.h>
#include <stdlib.h>

void parimp(int, int *, int *);


void main(void)
{
int I, N, NUM, PAR = 0, IMP = 0;
printf("ingrese el numero de datos: ");
scanf("%");
for (I =1; I <= N; I++)

{
    printf ("ingrese el numero %d:" , I);
    scanf ("%d", &NUM);
    parimp (NUM, &PAR, &IMP);

}

    printf("\nnumero de pares: %d", PAR);
    printf("\nnumero de impares: %d", IMP);

}
void parimp (int NUM, int *P, int *I)
{

    int RES;
    RES = pow(-1, NUM);
    if (RES > 0)
        *P += 1;
    else
        if (RES < 0)
        *I += 1;
return 0;
}
