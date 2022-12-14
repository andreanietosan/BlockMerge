/*
 * TadTablero.h
 *
 *  Created on: 6/12/2019
 *      Author: andrea
 */

#ifndef TADTABLERO_H_
#define TADTABLERO_H_
#include "TadCasilla.h"

#include <stdlib.h>
#include <iostream>
using namespace std;

const int MAX = 8;

typedef TadCasilla TMatriz [MAX][MAX];
struct TadTablero {
	TMatriz matriz;
	int dimension;

};

/*
 * PRE: {num > 0}
 * POST: {iniciar aleatoriamente el tablero con valores <= num}
 * COMPLEJIDAD: O(n²)
 */
void iniciarTableroAleatorio(TadTablero &tab,int dimension, int num);

/*
 * PRE: {matriz m > 0}
 * POST: {incia el tablero con la informacion de la matriz}
 * COMPLEJIDAD: O(n²)
 */
void iniciarTablero(TadTablero &tab, int m[MAX][MAX], int dimension);

/*
 * PRE: {tablero inicializado}
 * POST: {obtenemos el tamaño real del tablero}
 * COMPLEJIDAD: O(1)
 */
int obtenerTamReal(TadTablero tab);

/*
 * PRE: {casilla c inicializada}
 * POST: {poner un valor en una casilla concreta}
 * COMPLEJIDAD: O(1)
 */
void ponerValorTablero(TadTablero &tab, int fila, int columna, int valor);

/*
 * PRE: {tablero inicializado, fila>0, columna>0}
 * POST: {vaciar una casilla concreta del tablero}
 * COMPLEJIDAD: O(n)
 */
void vaciarCasillaTablero(TadTablero &tab, int fila, int columna);

/*
 * PRE: {tablero inicializado, fila>0, columna>0}
 * POST: {devuelve si una casilla concreta del tablero esta vacia o no}
 * COMPLEJIDAD: O(n)
 */
bool estaVaciaCasilla(TadTablero tab, int fila, int columna);

/*
 * PRE: {tablero inicializado, fila>0, columna>0}
 * POST: {obtener el valor de una casilla concreta del tablero}
 * COMPLEJIDAD: O(n)
 */
int obtenerValorCasilla(TadTablero tab, int fila, int columna);

/*
 * PRE: {tablero inicializado, fila>0, columna>0, valor>0}
 * POST: {devuelve si una casilla concreta forma parte de un bloque o no}
 * COMPLEJIDAD: O(n)
 */
bool esBloqueCasillaTablero(TadTablero tab, int fila, int columna, int valor);

/*
 * PRE: {tablero inicializado}
 * POST: {devuelve si hay un bloque en el tablero}
 * COMPLEJIDAD: O(n²)
 */
bool hayBloques(TadTablero tab);

/*
 * PRE: {tablero inicializado}
 * POST: {devuelve el valor maximo de las casillas del tablero}
 * COMPLEJIDAD: O(n²)
 */
int obtenerValorMax(TadTablero tab);

/*
 * PRE: {tablero inicializado, fila>0, columna>0, valor>0}
 * POST: {vacia todas las casillas del bloque al que pertenece esa casilla}
 * COMPLEJIDAD: O(n²)
 */
void vaciarBloqueCasillaTablero(TadTablero &tab, int fila, int columna, int valor);

/*
 * PRE: {tablero inicializado, columna>0}
 * POST: {desplazar hacia abajo las casillas con números que tengan casillas vacías debajo}
 * COMPLEJIDAD: O(n²)
 */
void desplazarVaciasColumna(TadTablero &tab, int col);

/*
 * PRE: {tablero incializado}
 * POST: {desplazar hacia abajo todas las casillas, en todas las columnas del tablero}
 * COMPLEJIDAD: O(n)
 */
void desplazarTodasColumnas(TadTablero &tab);
/*
 * PRE: {tablero inicializado, columna>0}
 * POST: {rellenar por arriba las columnas que estan vacias }
 * COMPLEJIDAD: O(n)
 */
void rellenarPorArribaColumnaVacia(TadTablero &tab, int col);
/*
 * PRE: {tablero inicializado}
 * POST: {rellenar todas las columnas del tablero con valores aleatorios}
 * COMPLEJIDAD: O(n)
 */
void rellenarTodasColumnas(TadTablero &tab);

#endif /* TADTABLERO_H_ */
