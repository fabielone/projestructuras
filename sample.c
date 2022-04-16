
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble(char[]);

typedef struct Alumno
{

    char Matricula[25];
    char Nombre[25];
    char ApellidoP[50];
    char ApellidoM[50];
    char Edad[25];
    char Carrera[10];

} Alumno;

void Arrange(Alumno Datos[], short);
void ArrangeInt(Alumno Datos[], short);

void Visualizar(struct Alumno *);

void main() /* Rellenar y visualizar V */
{

    char buf[20];

    short num;

    struct Alumno Inicial;

    struct Alumno arrDatos[20];

    for (int i = 0; i < 3; i++)
    {

        printf("Estudiande %d \n", i + 1);
        printf("Matricula: ");
        fgets(arrDatos[i].Matricula, 25, stdin);
        printf("Nombre: ");
        fgets(arrDatos[i].Nombre, 25, stdin);
        printf("Apellido Paterno: ");
        fgets(arrDatos[i].ApellidoP, 50, stdin);
        printf("Apellido Materno: ");
        fgets(arrDatos[i].ApellidoM, 50, stdin);
        printf("Edad: ");
        fgets(arrDatos[i].Edad, 25, stdin);
        printf("Carrera: ");
        fgets(arrDatos[i].Carrera, 50, stdin);
        // fgets(buf, 20, stdin);

        system("clear");
    }

    printf("opcion:\n");
    scanf(" %hd", &num);

    ArrangeInt(arrDatos, num);
}

void Visualizar(Alumno Datos[])
{
    // system("clear");

    for (int i = 0; i < 3; i++)
    {
        printf("Estudiande %d \n", i + 1);
        printf(" \nMatricula: %s", Datos[i].Matricula);
        printf("\nNombre: %s", Datos[i].Nombre);
        printf("\nApellido Paterno: %s", Datos[i].ApellidoP);
        printf("\nApellido Materno: %s", Datos[i].ApellidoM);
        printf("\nEdad: %s", Datos[i].Edad);
        printf("\nCarrera: %s\n", Datos[i].Carrera);
    }
}

// void Arrange(Alumno Datos[], short n)
// {
//     int c, d;
//     struct Alumno swap;
//     switch (n)
//     {
//     case 1:

//         // printf("%d", Datos[0].Matricula);
//         // printf("%d", Datos[1].Matricula);

//         for (int c = 0; c < 3 - 1; c++)
//         {
//             for (int d = 0; d < 3 - c - 1; d++)
//             {

//                 printf(" %d", d);
//                 if (strcmp(Datos[d].Matricula, Datos[d + 1].Matricula) > 0)
//                 {

//                     swap = Datos[d];
//                     Datos[d] = Datos[d + 1];
//                     Datos[d + 1] = swap;
//                 }
//             }
//         }
//         Visualizar(Datos);

//         break;
//     case 2:
//         /**/
//         break;
//     case 3:
//         /**/
//         break;
//     default:
//         break;
//     }
// };

void ArrangeInt(Alumno Datos[], short n)
{
    int c, d;
    struct Alumno swap;
    switch (n)
    {
    case 1:

        printf("%s", Datos[0].Matricula);
        printf("%s", Datos[1].Matricula);

        for (int c = 0; c < 3 - 1; c++)
        {
            for (int d = 0; d < 3 - c - 1; d++)
            {

                printf(" %d", d);
                if (atoi(Datos[d].Matricula) > atoi(Datos[d + 1].Matricula))
                {

                    swap = Datos[d];
                    Datos[d] = Datos[d + 1];
                    Datos[d + 1] = swap;
                }
            }
        }
        Visualizar(Datos);

        break;
    case 2:
        /**/
        break;
    case 3:
        /**/
        break;
    default:
        break;
    }
};
