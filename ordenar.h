

short menuordenar()
{

    short opc;
    mensajes("Elija una opcion. ", 32);

    RecuadroTextoCentrado(24, 7, 56, 17, 38, "[Ordenar Por:]");
    //  Textos Del menu
    ColorTexto(0);
    PonTextoCentradoPantalla(9, "Matricula-----------[1]");
    PonTextoCentradoPantalla(10, "Nombre--------------[2]");
    PonTextoCentradoPantalla(11, "Apellido Paterno----[3]");
    PonTextoCentradoPantalla(12, "Apellido Materno----[4]");
    PonTextoCentradoPantalla(13, "Edad----------------[5]");
    PonTextoCentradoPantalla(14, "Carrera-------------[6]");
    PonTextoCentradoPantalla(15, "Salir---------------[0]");
    // Escaner el numero de opcion

    gotoxy(48, 13);

    do
    {
        gotoxy(48, 13);
        opc = getch();
        printf("%hu", opc);

        if ((opc >= 48 && opc <= 54))
        {

            clearportion(24, 7, 56, 17);
            return opc;
        }
        else
        {
            mensajes("opcion no valida", 31);
            gotoxy(48, 13);
        }
    } while (opc < 48 || opc > 54);
    // El salto para que no se coma el cuadro el mensaje de abajo
}

void ordenar(Alumno arrDatos[], short *length)
{
    short opc;
    PonTextoCentradoPantalla(2, "                                 ");
    PonTextoCentradoPantalla(2, "ordenar");

    opc = menuordenar();
    while (opc != 48)
    {
        struct Alumno swap;

        switch (opc)
        {
        case 49:
            /* Ordenar Por Matricula


            */

            for (int c = 0; c < *length-1; c++)
            {
                for (int d = 0; d < *length - c - 1; d++)
                {

                    printf(" %d", d);
                    if (atoi(arrDatos[d].Matricula) > atoi(arrDatos[d + 1].Matricula))
                    {

                        swap = arrDatos[d];
                        arrDatos[d] = arrDatos[d + 1];
                        arrDatos[d + 1] = swap;
                    }
                }
            }

            listar(arrDatos, length);

            break;

        case 50:
        for (int c = 0; c < *length-1; c++)
            {
                for (int d = 0; d < *length - c - 1; d++)
                {

                    printf(" %d", d);
                    {
                    if (strcmp(arrDatos[d].Nombre,arrDatos[d + 1].Nombre)>0)

                        swap = arrDatos[d];
                        arrDatos[d] = arrDatos[d + 1];
                        arrDatos[d + 1] = swap;
                    }
                }
            }

            listar(arrDatos, length);

            break;
            break;

        case 51:
            /* funcion de modificar */

            // listar(arrDatos, 1);
            break;

        case 52:
            /* funcion de ordenar */

            // listar(arrDatos, 1);
            break;

        case 54:
            /* funcion de listar */
            // listar(arrDatos, numtablas);
            break;

        case 53:
            /* funcion de buscar */

            break;

        default:
            break;
        }

        opc = menuordenar();
    }
}
