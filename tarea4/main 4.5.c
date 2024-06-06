#include <stdio.h>
#include <stdlib.h>


int cubo(int);
int main()
{

int I;
  for (I = 1; I <= 10; I++)
    printf ("\n el cubo de I  es %d", cubo (I));


}
int cubo (int K)
{
   return (K*K*K);
}


