#include <stdio.h>
#include <stdlib.h>


//factorial, el promedio calcula el factorial de un numero entero
//FAC, I, NUM: variable de tipo entero
int main()
{
    int I, NUM;
    long FAC;//almacena el reesusltado por el ususario

    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);//almacena los datos en NUM

    if (NUM >= 0)//comprueba si el numero ingresado es mayor o igul a 0, los numeros negativos no tienen factorial definido
        FAC = 1;//inicializa FAC a 1

        for(I=1; I<= NUM; I++)//inicializa I = 1
            //I<= NUM se evalua antes de cada iteracion del bucle mientras I sea menor o igual a NUM el bucle seguira ejecutandose, si la condicion es falsa el bucle termina
        FAC *= I;//por cada iteracion multiplica el valor actual de FAC por el valor de I actualizando FAC con el nuevo valor

        printf("\nEl factorial de %d es: %ld", NUM, FAC);

    }
    else



    printf("\nError en el dato ingresado");
    return 0;
}
