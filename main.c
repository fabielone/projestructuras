// Archivo Principal
#include "./getch.h"
#include "./struct.h"
#include "./listar.h"
#include "./interfaz.h"
#include "./menu.h"
#include "./insertar.h"
#include "./borrar.h"
#include "./modificar.h"
#include "./ordenar.h"
#include "./buscar.h"
#include "./salida.h"


void main()
{
    interfaz();

    // struct ArrAlumno arrDatos;

    Alumno arrDatos[100];

    // selecion cual opcion, numtablas numero de estudiantes.

    short selecion, numtablas = 0;

    // para hacer recuadro
    // funcion para mostra menu y regresar un numero

    selecion = menu();

    // listar(arrDatos, 1);
    int num;
    while (selecion != 48)
    {
        switch (selecion)
        {
        case 49:
            /* funcion de insertar


            */

            insertar(arrDatos, 1);
            // listar(arrDatos, 1);
            scanf("%d", &num);
            break;

        case 50:
            /* funcion de borrar */
            borrar(arrDatos, 1);
            listar(arrDatos, 1);
            break;

        case 51:
            /* funcion de modificar */
            modificar(arrDatos);
            listar(arrDatos, 1);
            break;

        case 52:
            /* funcion de ordenar */
            ordenar(arrDatos);
            listar(arrDatos, 1);
            break;

        case 54:
            /* funcion de listar */
            listar(arrDatos, 1);
            break;

        case 53:
            /* funcion de buscar */
            buscar(arrDatos, 1);
            
            break;

        default:
            break;
        }

         selecion=menu();
        

    }

    salida();
    
}