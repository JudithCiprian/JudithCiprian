#include <stdio.h>
#include <stdlib.h>


  void main(void)
 {
 char  p1;
 FILE *ar;
 ar = fopen("arc.txt", "w");    /* Se abre el archivo aarrcc..ttxxtt para escritura. */
 if (ar != NULL)
{
 while ((p1=getchar()) !=  '\n')
 /* Se escriben caracteres en el archivo mientras no se detecte el caracter
➥que indica el fin de la línea. */
  fputc (p1, ar);
fclose(ar);                            /* Se cierra el archivo. */
 }
else
 printf("No se puede abrir el archivo");
 }
