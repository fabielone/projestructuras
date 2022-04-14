#include "./libreria.h"
void clearportion(short c1, short r1, short c2, short r2);
void mensajes(char *mensaje, short);

short menu()
{

  short opc;

  RecuadroTextoCentrado(24, 7, 56, 15, 35, "[MENU]");
  // Textos Del menu
  ColorTexto(0);
  PonTextoCentradoPantallaDELAY(9, "Insertar-----------[1]");
  PonTextoCentradoPantallaDELAY(10, "Borrar-----------[2]");
  PonTextoCentradoPantallaDELAY(11, "Modificar---------[3]");
  PonTextoCentradoPantallaDELAY(12, "Ordenar------------[4]");
  PonTextoCentradoPantallaDELAY(12, "Buscar------------[4]");
  PonTextoCentradoPantallaDELAY(13, "Listar-------[5 ]");
  PonTextoCentradoPantallaDELAY(13, "Salir-------[0 ]");
  // Escaner el numero de opcion

  gotoxy(48, 13);

  do
  {
    gotoxy(48, 13);

    if (scanf(" %hu%*c", &opc) == 1 && (opc >= 1 && opc <= 4))
    {

      clearportion(24, 7, 56, 15);
      return opc;
    }
    else
    {
      mensajes("opcion no valida", 31);
      gotoxy(48, 13);
    }
  } while (opc < 1 || opc > 4);
  // El salto para que no se coma el cuadro el mensaje de abajo

  return opc;
}

void clearportion(short c1, short r1, short c2, short r2)
{

  for (int i = c1; i <= c2; i++)

  {
    for (int j = r1; j <= r2; j++)
    {
      gotoxy(i, j);
      printf(" \n");
      delay(10);
    }
  }
}

void mensajes(char *mensaje, short clr)
{

  clearportion(2, 21, 80, 21);
  ColorTexto(clr);
  PonTextoCentradoPantallaDELAY(21, mensaje);
  ColorTexto(0);
}