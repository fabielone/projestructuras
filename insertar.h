#include <string.h>

void insertar(Alumno arrData[], short *i)
{
    char buf[20];
    PonTextoCentradoPantalla(2, "                                 ");
    PonTextoCentradoPantalla(2, "insertar");
    clearportion(2, 4, 79, 19);
    // fgets(buf, 20, stdin);
    short opc;
    do
    {
        clearportion(2, 4, 79, 19);
        gotoxy(4, 4);
        printf("Estudiante #%hu", *i);
        gotoxy(4, 5);
        printf("Matricula:");
        gets(arrData[*i].Matricula);
        gotoxy(4, 6);
        printf("Nombre:");
        gets(arrData[*i].Nombre);
        gotoxy(4, 7);
        printf("Apellido Paterno:");
        gets(arrData[*i].ApellidoP);
        gotoxy(4, 8);
        printf("Apellido Materno:");
        gets(arrData[*i].ApellidoM);
        gotoxy(4, 9);
        printf("Edad:");
        scanf("%d", &arrData[*i].Edad);
        fgets(buf, 20, stdin);
        gotoxy(4, 10);
        printf("Carrera:");
        gets(arrData[*i].Carrera);
        gotoxy(4, 11);
        *i = *i + 1;
        mensajes("Deseas agregar otro alumno? 0.NO / 1.SI. ", 32);

        opc = getch();

        if ((opc == 49 || opc == 48))
        {
        }
        else
        {

            do
            {

                mensajes("opcion no valida", 31);
                delay(500);
                mensajes("Deseas agregar otro alumno? 0.NO / 1.SI. ", 32);
                opc = getch();
            } while (opc != 48 && opc != 49);
        }
    } while (opc != 48);
    clearportion(2, 4, 79, 19);
    // El salto para que no se coma el cuadro el mensaje de abajo
};