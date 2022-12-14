/*
 * TadJuego.cpp
 *
 *  Created on: 18/1/2020
 *      Author: andrea
 */

#include "TadJuego.h"

void iniciar(juego& J) {
	int tam, objetivo, deDonde;
	int m[MAX_TAMANO][MAX_TAMANO];

	//se carga la información almacenada en el fich. de configuración
	if (entornoCargarConfiguracion(tam, objetivo, deDonde, m)) {
		entornoIniciar(tam); //se inicia el entorno gráfico
		if(deDonde==0){
			iniciarTablero(J.tablero, m, tam);
		}
		else{
			iniciarTableroAleatorio(J.tablero, tam, deDonde);
		}
		J.valorObjetivo=objetivo;
		entornoPonerObjetivo(objetivo);
		pintarCasillas(J);

	}
}

void jugar(juego &J){
	bool salir = false; //bandera utilizada para finalizar el bucle
			TipoTecla tecla;    //almacena la tecla pulsada por el usuario

			int fila = 0;
			int col  = 0;
			int tam = obtenerTamReal(J.tablero);
			entornoMarcarPosicion(fila,col);
			entornoMostrarMensaje("Pulsa ESC para salir",1.5);

			int valor;

			//el bucle permite al jugador desplazarse por el tablero de juego
			while (!salir) {
				tecla = entornoLeerTecla();
				switch (tecla) {
				case TEnter:
					valor =  obtenerValorCasilla(J.tablero, fila, col);
					if(esBloqueCasillaTablero(J.tablero, fila, col, valor)){
						vaciarBloqueCasillaTablero(J.tablero, fila, col, valor);
						ponerValorTablero(J.tablero, fila, col, valor+1);
						desplazarTodasColumnas(J.tablero);
						rellenarTodasColumnas(J.tablero);
						pintarCasillas(J);

						if(J.valorObjetivo == obtenerValorMax(J.tablero)){
							salir=true;
						}
						if(!hayBloques(J.tablero)){
							salir=true;
						}
					}
					break;
				case TDerecha:
					entornoDesmarcarPosicion(fila, col);
					if (col < tam - 1)
							col++;
					else
							col = 0;
					entornoMarcarPosicion(fila, col);
					break;
				case TIzquierda:
					entornoDesmarcarPosicion(fila, col);
					if (col > 0)
						col--;
					else
						col = tam - 1;
					entornoMarcarPosicion(fila, col);
					break;
				case TArriba:
					entornoDesmarcarPosicion(fila, col);
					if (fila > 0)
						fila--;
					else
						fila = tam - 1;
					entornoMarcarPosicion(fila, col);
					break;
				case TAbajo:
					entornoDesmarcarPosicion(fila, col);
					if (fila < tam - 1)
						fila++;
					else
						fila = 0;
					entornoMarcarPosicion(fila, col);
					break;

				case TSalir:
					salir = true;
					break;

				case TNada:
					break;
				} //Fin de switch
			}//Fin de while
}

void finalizarJuego(){
	entornoMostrarMensajeFin("JUEGO TERMINADO");
	entornoPausa(1.5);
	entornoTerminar();
}

void pintarCasillas(juego J) {
	int fila, col;
	for ( fila = 0; fila < obtenerTamReal(J.tablero); fila++) {
		for ( col = 0; col < obtenerTamReal(J.tablero); col++) {
			entornoPonerNumero(fila, col, obtenerValorCasilla(J.tablero, fila, col));
		}
	}
}
