 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, 20, stdin);
    strtok(a->nombre, "\n"); // Para eliminar el salto de línea
    printf("Ingrese el departamento de la empresa: ");
    fgets(a->departamento, 20, stdin);
    strtok(a->departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    getchar(); // Para limpiar el buffer de entrada
    printf("—-Ingrese la direccion del empleado—-");
    printf("\n\tCalle: ");
    fgets(a->direccion.calle, 20, stdin);
    strtok(a->direccion.calle, "\n");
    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    getchar(); // Para limpiar el buffer de entrada
    printf("\tLocalidad: ");
    fgets(a->direccion.localidad, 20, stdin);
    strtok(a->direccion.localidad, "\n");
}

int main(void) {
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jeronimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e1 == NULL) {
        fprintf(stderr, "No se pudo asignar memoria.\n");
        return 1;
    }

    printf("\nIngrese el nombre del empleado 1: ");
    fgets(e1->nombre, 20, stdin);
    strtok(e1->nombre, "\n");
    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, 20, stdin);
    strtok(e1->departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    getchar(); // Para limpiar el buffer de entrada
    printf("—-Ingrese la direccion del empleado—-");
    printf("\n\tCalle: ");
    fgets(e1->direccion.calle, 20, stdin);
    strtok(e1->direccion.calle, "\n");
    printf("\tNumero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    getchar(); // Para limpiar el buffer de entrada
    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, 20, stdin);
    strtok(e1->direccion.localidad, "\n");

    printf("\nIngrese el nombre del empleado 3: ");
    fgets(e3.nombre, 20, stdin);
    strtok(e3.nombre, "\n");
    printf("Ingrese el departamento de la empresa: ");
    fgets(e3.departamento, 20, stdin);
    strtok(e3.departamento, "\n");
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    getchar(); // Para limpiar el buffer de entrada
    printf("—-Ingrese la direccion del empleado—-");
    printf("\n\tCalle: ");
    fgets(e3.direccion.calle, 20, stdin);
    strtok(e3.direccion.calle, "\n");
    printf("\tNumero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    getchar(); // Para limpiar el buffer de entrada
    printf("\tLocalidad: ");
    fgets(e3.direccion.localidad, 20, stdin);
    strtok(e3.direccion.localidad, "\n");

    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e2 == NULL) {
        fprintf(stderr, "No se pudo asignar memoria.\n");
        free(e1);
        return 1;
    }

    Lectura(e2);
    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    free(e1);
    free(e2);

    return 0;
}
