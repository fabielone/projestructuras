
short menubuscar()
{

    short opc;
    mensajes("Elija una opcion. ", 32);
    clearportion(2, 4, 81, 19);

    RecuadroTextoCentrado(24, 7, 56, 17, 38, "[Buscar Por:]");
    //  Textos Del menu
    ColorTexto(0);
    PonTextoCentradoPantalla(9, "Matricula-----------[1]");
    PonTextoCentradoPantalla(10, "Nombre--------------[2]");
    PonTextoCentradoPantalla(11, "Apellido Paterno----[3]");
    PonTextoCentradoPantalla(12, "Apellido Materno----[4]");
    PonTextoCentradoPantalla(13, "Edad----------------[5]");
    PonTextoCentradoPantalla(14, "Carrera-------------[6]");
    PonTextoCentradoPantalla(15, "Salir---------------[0]");
    PonTextoCentradoPantalla(16, "Seleccione----------[ ]");
    // Escaner el numero de opcion

    gotoxy(48, 13);

    do
    {
        gotoxy(50, 16);
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

void buscar(Alumno arrDatos[], short *length)
{
    short opc;
    PonTextoCentradoPantalla(2, "                                 ");
    PonTextoCentradoPantalla(2, "Buscar");

    opc = menubuscar();

    while (opc != 48)
    {
        if (opc == 49)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese Matricula: ");
            fgets(tempchar, 25, stdin);
            validarNumeros(tempchar,25,"none");
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].Matricula) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }

            do
            {

                mensajes("Presione 0 para salir ", 32);
                opc = getch();
            } while (opc != 48);
        }

        if (opc == 50)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese el nombre del alumno: ");
            fgets(tempchar, 25, stdin);
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].Nombre) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }
        }
        if (opc == 51)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese el apellido paterno: ");
            fgets(tempchar, 25, stdin);
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].ApellidoP) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }
        }

        if (opc == 52)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese el apellido materno: ");
            fgets(tempchar, 25, stdin);
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].ApellidoM) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }
        }

        if (opc == 53)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese la edad: ");
            fgets(tempchar, 25, stdin);
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].Edad) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }
        }
        if (opc == 54)
        {

            // buscar matricula
            // pedir matricula
            // mostrar alumnos
            // presionar zero par salir
            struct Alumno swap;
            char tempchar[25];
            // memset(tempchar, 0, 25);
            PonTextoCentradoPantalla(9, "Ingrese la carrera: ");
            fgets(tempchar, 25, stdin);
            clearportion(2, 4, 79, 19);

            gotoxy(2, 4);
            printf(" # |");
            printf(" Matricula | ");
            printf(" Nombre  | ");
            printf("Ape Paterno | ");
            printf("Ape Materno | ");
            printf("Edad | ");
            printf("  Carrera    |");
            printf("Act\n");

            int cont = 0;

            for (int i = 0; i < *length; i++)
            {
                if (strcasecmp(tempchar, arrDatos[i].Carrera) == 0)
                {
                    gotoxy(2, 5 + cont);
                    printf(" %d \n ", cont + 1);
                    gotoxy(5, 5 + cont);
                    printf("|\n");
                    CortarTexto(arrDatos[i].Matricula, 7, 5 + cont, 6);
                    gotoxy(17, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Nombre, 18, 5 + cont, 10);
                    gotoxy(28, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoP, 29, 5 + cont, 13);
                    gotoxy(42, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].ApellidoM, 43, 5 + cont, 13);
                    gotoxy(56, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Edad, 57, 5 + cont, 3);
                    gotoxy(63, 5 + cont);
                    printf("|");

                    CortarTexto(arrDatos[i].Carrera, 64, 5 + cont, 14);
                    gotoxy(78, 5 + cont);
                    printf("|");
                    CortarTexto(arrDatos[i].Status, 79, 5 + cont, 14);
                    cont++;
                }
            }
        }

        opc = menubuscar();
    }
}