
#include "./libreria.h"
void interfaz()
{

	system("clear");
	// Este es el cuadro principal
	Recuadro(1, 1, 82, 22, 32);

	LineaHorizontal(1, 82, 3, 32);
	LineaHorizontal(1, 82, 20, 32);
	ColorTexto(33);
	PonTextoCentradoPantalla(2, "Sheets");

	PonTextoCentradoPantallaDELAY(20, "[MENSAJES]");
	// El cuando del menu de la primera interfaz
	// Recuadro(24, 7, 56, 15, 35);
}