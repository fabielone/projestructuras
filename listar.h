
#include <stdio.h>

void listar(Alumno arrDatost[], short length)
{
    // system("clear");

    for (int i = 0; i < 1; i++)
    {
        printf("Estudiande %d \n", i + 1);
        printf(" \nMatricual: %s", arrDatost[i].Matricula);
        printf("\nNombre: %s", arrDatost[i].Nombre);
        printf("\nApellido Paterno: %s", arrDatost[i].ApellidoP);
        printf("\nApellido Materno: %s", arrDatost[i].ApellidoM);
        printf("\nEdad: %d", arrDatost[i].Edad);
        printf("\nCarrera: %s\n", arrDatost[i].Carrera);
    }
}
