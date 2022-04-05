#include "./struct.h"




struct ArrAlumno listar(struct ArrAlumno *arrDatos){
       



    return *arrDatos;



}

void listar(struct ArrAlumno *arrDatos)
{
    // system("clear");

    for (int i = 0; i < 3; i++)
    {
        printf("Estudiande %d \n", i + 1);
        printf(" \nMatricual: %s", arrDatos[i].Matricula);
        printf("\nNombre: %s", arrDatos[i].Nombre);
        printf("\nApellido Paterno: %s", Datos[i].ApellidoP);
        printf("\nApellido Materno: %s", Datos[i].ApellidoM);
        printf("\nEdad: %d", Datos[i].Edad);
        printf("\nCarrera: %s\n", Datos[i].Carrera);
    }
}