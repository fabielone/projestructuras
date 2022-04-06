
#include "./libreria.h"
void interfaz(){

    system("clear");
	// Este es el cuadro principal
	Recuadro(1, 1, 82, 22, 32);
	Recuadro(1, 1, 82, 22, 33);
	Recuadro(1, 1, 82, 22, 35);
    	LineaHorizontal(1, 82, 3, 35);
	LineaHorizontal(1, 82, 20, 35);
	ColorTexto(33);
	PonTextoCentradoPantallaAnimadoVERT(2, 10, "Sheets");

	PonTextoCentradoPantallaDELAY(20, "[MENSAJES]");
	// El cuando del menu de la primera interfaz
	Recuadro(24, 7, 56, 15, 35);

}