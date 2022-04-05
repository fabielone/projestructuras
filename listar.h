#include "./struct.h"






void listar(struct ArrAlumno *arrDatos)
{
    // system("clear");

   

    for (int i = 0; i < 3; i++)
    {
        printf("Estudiande %d \n", i + 1);
        printf(" \nMatricual: %s", arrDatos->arrDatos1[i].Matricula);
        printf("\nNombre: %s", arrDatos.arrDatos1[i].Nombre);
        printf("\nApellido Paterno: %s", arrDatos->arrDatos1[i].ApellidoP);
        printf("\nApellido Materno: %s", Datos[i].ApellidoM);
        printf("\nEdad: %d", Datos[i].Edad);
        printf("\nCarrera: %s\n", Datos[i].Carrera);
    }
}