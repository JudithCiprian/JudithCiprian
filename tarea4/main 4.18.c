#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Expresión.
El programa escribe los valores de T, P y Q que satisfacen una determinada
➥ expresión.*/
int Expresion(int, int, int); /* Prototipo de función. */
void main(void)
{
int EXP, T = 0, P = 0, Q = 0;
EXP = Expresion(T, P, Q);
while (EXP < 5500)
{
while (EXP < 5500)
{
while (EXP < 5500)
{
 printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
Q++;
EXP = Expresion(T, P, Q);
}
P++;
Q = 0;



    return 0;
}

