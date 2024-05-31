#include <stdio.h>
#include <stdlib.h>
//fibonachi, el programa calcula y escribe los primeros 50  numeros de fibonacci
// I, PRI, SEG, SIG: variable de tipo entero
int main()
{
    int I, PRI = 0, SEG = 1, SIG;
    printf("\t %d \t %d", PRI, SEG);
    for (I = 3; I< = 50; I++)
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;
        printf ("\t %d", SIG);

    }
    return 0;
}
