
void mensajes(char *mensaje, short);

short menu()
{

  short opc;
  mensajes("Elija una opcion. ", 32);

  RecuadroTextoCentrado(24, 7, 56, 17, 38, "[MENU]");
  //  Textos Del menu
  ColorTexto(0);
  PonTextoCentradoPantalla(9, "Insertar-----------[1]");
  PonTextoCentradoPantalla(10, "Borrar-------------[2]");
  PonTextoCentradoPantalla(11, "Modificar----------[3]");
  PonTextoCentradoPantalla(12, "Ordenar------------[4]");
  PonTextoCentradoPantalla(13, "Buscar-------------[5]");
  PonTextoCentradoPantalla(14, "Listar-------------[6]");
  PonTextoCentradoPantalla(15, "Salir--------------[0]");
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

void mensajes(char *mensaje, short clr)
{

  clearportion(2, 21, 80, 21);
  ColorTexto(clr);
  PonTextoCentradoPantalla(21, mensaje);
  ColorTexto(0);
}