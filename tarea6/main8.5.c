#include <stdio.h>
#include <string.h>

union datos {
    char celular[15];
    char correo[20];
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a); // Prototipo de funci�n

int main(void) {
    alumno a1 = {120, "Maria", "Contabilidad", 8.9, .personales.celular = "5-158-40-50"};
    alumno a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &a2.matricula);
    getchar(); // Limpia el buffer de entrada
    printf("Ingrese el nombre: ");
    fgets(a2.nombre, sizeof(a2.nombre), stdin);
    a2.nombre[strcspn(a2.nombre, "\n")] = '\0'; // Elimina el salto de l�nea
    printf("Ingrese la carrera: ");
    fgets(a2.carrera, sizeof(a2.carrera), stdin);
    a2.carrera[strcspn(a2.carrera, "\n")] = '\0'; // Elimina el salto de l�nea
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    getchar(); // Limpia el buffer de entrada

    printf("Ingrese el correo electronico: ");
    fgets(a2.personales.correo, sizeof(a2.personales.correo), stdin);
    a2.personales.correo[strcspn(a2.personales.correo, "\n")] = '\0'; // Elimina el salto de l�nea

    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.correo); // Imprime el correo electr�nico

    printf("Ingrese el telefono celular del alumno 2: ");
    fgets(a2.personales.celular, sizeof(a2.personales.celular), stdin);
    a2.personales.celular[strcspn(a2.personales.celular, "\n")] = '\0'; // Elimina el salto de l�nea
    puts(a2.personales.celular); // Imprime el tel�fono celular

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular); // Imprime el tel�fono celular
}

void Lectura(alumno *a) {
    printf("\nIngrese la matricula: ");
    scanf("%d", &a->matricula);
    getchar(); // Limpia el buffer de entrada
    printf("Ingrese el nombre: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    a->nombre[strcspn(a->nombre, "\n")] = '\0'; // Elimina el salto de l�nea
    printf("Ingrese la carrera: ");
    fgets(a->carrera, sizeof(a->carrera), stdin);
    a->carrera[strcspn(a->carrera, "\n")] = '\0'; // Elimina el salto de l�nea
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    getchar(); // Limpia el buffer de entrada
    printf("Ingrese el telefono celular: ");
    fgets(a->personales.celular, sizeof(a->personales.celular), stdin);
    a->personales.celular[strcspn(a->personales.celular, "\n")] = '\0'; // Elimina el salto de l�nea
}
