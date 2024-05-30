#include <stdio.h>
#include <stdlib.h>



//suma pagos
//el programa obtiene la suma de los pagos realizados el ultimo mes
// PAG y SPA: variable de tipo real

int main()
{
  float PAG, SPA = 0;//declara dos variables de tipo float PAG almacena cada pago ingresado, SPA para acumular la suma de todos los pagos ingresados incluido 0
  printf ("ingreswe el primer pago:\t");
  scanf("%f", &PAG);//lee los valores y los almacena en PAG

  //observa que al utilizar la estructura de-while al menos se necesita un pago
  do//inicia un bucle do-while que garantiza que el bloque de codigo se ejecute al menos una vez
  {
      SPA = SPA + PAG;//suma los valores de PAG a la variable SPA acumulando el total de los pagos
      printf ("ingrese el siguiente pago -0 para terminar-:\t");
      scanf("%f", &PAG);//lee el siguiente valor de tipo float y lo almacena en PAG
  }



while (PAG);//el bucle do-while se ejecuta mientras PAG sea diferente de cero, cuanddo PAG es 0 el bucle termina
    printf("\n el total de pagos del mes :%.2f", SPA);
    return 0;
}
