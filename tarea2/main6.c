#include <stdio.h>
#include <stdlib.h>

int main()
{
 float SAL;
 int NIV;
    printf("Ingrese el nivel academico del prodesor:");
    scanf("%d", &NIV);
    printf("Ingrese el salario: ");
    scanf("%f", &SAL);
    switch(NIV)

    {
        case 1: SAL * 1.0035; break;
        case 2: SAL * 1.0041; break;
        case 3: SAL * 1.0048; break;
        case 4: SAL * 1.0053; break;
    }

    printf("\n\nNivel salario: %8.2f", NIV, SAL);

    return 0;
}
