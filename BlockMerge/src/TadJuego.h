/*
 * TadJuego.h
 *
 *  Created on: 18/1/2020
 *      Author: andrea
 */

#ifndef TADJUEGO_H_
#define TADJUEGO_H_
#include "TadTablero.h"
#include "entorno.h"
#endif /* TADJUEGO_H_ */
#include <iostream>
using namespace std;

typedef TadTablero Tablero;
struct juego{
	Tablero tablero;
	int valorObjetivo;
};

/*
 * PRE: {tiene que existir el juego}
 * POST: {inicializa el juego para poder jugar}
 * COMPLEJIDAD: O(n)
 */
void iniciar(juego &J);

/*
 * PRE=: {existe juego y ha sido inicializado}
 * POST: {gestionar las teclas que se pulsen, actualizar el tablero y la
pantalla, dar el juego por finalizado, etc.}
 * COMPLEJIDAD:O(n)
 */
void jugar(juego &J);

/*
 * PRE=: {existe juego y ha sido inicializado}
 * POST: {finalizar el juego y mostrar un mensaje de fin}
 * COMPLEJIDAD:O(1)
 */
void finalizarJuego();

/*
 * PRE: {tiene que existir el juego}
 * POST: {pinta las casillas del tablero}
 * COMPLEJIDAD: O(n²)
 */
void pintarCasillas(juego J);
