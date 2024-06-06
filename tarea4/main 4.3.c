#include <stdio.h>
#include <stdlib.h>
void f1(void);
int K = 5;

//Conflicto de variables con el mismo nombre.
int main()
int I;
{

for (I = 1; I <= 3; I++){
f1();

}
return 0;
void f1 (void)
}
void f1 (void)
   int K = 2;
K += K;
printf("\n\n el valor de la variable local es: %d", K);
::K = ::K + K;
printf("\n el valor de la variable global es: %d", ::K);

    return 0;
}
