//Archivo Principal

#include "./struct.h"
#include "./menu.h"
#include "./insertar.h"
#include "./borrar.h"
#include "./modificar.h"
#include "./ordenar.h"
#include "./listar.h"
#include "./buscar.h"
#include "./libreria.h"



void main(){

    

    struct ArrAlumno arrDatos;

    short selecion,numtablas=0;

     //para hacer recuadro
     //funcion para mostra menu y regresar un numero 
     
     selecion = menu();
    
        while (selecion!=0)
        {
            switch (selecion)
            {
            case 1:
                /* funcion de insertar 
                
                
                */
               insertar(&arrDatos);
                break;

            case 2:
                /* funcion de borrar */
                borrar(&arrDatos);
                break;

            case 3:
                /* funcion de modificar */
                modificar(&arrDatos);
                break;

            case 4:
                /* funcion de ordenar */
                ordenar(&arrDatos);
                break;

            case 5:
                /* funcion de listar */
                listar(&arrDatos);
                break;

            case 6:
                /* funcion de buscar */
                buscar(&arrDatos);
                break;

        
            
            default:
                break;
            }


            //selecion=menu();
            selecion = 0;


        }
        

    //funcion de salida 




}