/*
 * pruebaTablero.h
 *
 *  Created on: 18/1/2020
 *      Author: andrea
 */

#ifndef PRUEBATABLERO_H_
#define PRUEBATABLERO_H_
#include "TadTablero.h"
using namespace std;
#include <iostream>

/*
 * PRUEBAS DEL TADTABLERO.
 */

/*
 * DESCRIPCION: en esta prueba se va aprobar el metodo IniciarTablero para ello,
 * inicializamos un tablero, le entra una dimension y una matriz.
 * COMPLEJIDAD: O(1)
 */
void pruebaIniciarTablero();


/*
 * DESCRIPCION: ponemos a prueba el metodo obtenerTamReal, que se obtiene el tamaño real del tablero,
 * para ello simplemente inicializamos el tablero.
 * COMPLEJIDAD: O(n)
 */
void pruebaObtenerTamReal();


/*
 * DESCRIPCION: ponemos a prueba el metodo ponerValorTablero, que es poner un valor en una casilla
 * concreta del tablero, inicializamos el tablero, introducimos la fila, la columna y un valor.
 * COMPLEJIDAD: O(n)
 */
void pruebaPonerValorTablero();


/*
 * DESCRIPCION: probamos vaciarCasillaTablero, que en una casilla concreta del tablero la vaciamos,
 * inicializamos el tablero, introducimos una fila y una columna.
 * COMPLEJIDAD: O(n)
 */
void pruebaVaciarCasillaTablero();


/*
 * DESCRIPCION: probamos en esta pruba el estaVaciaCasilla, que en una casilla concreta del tablero
 * vemos si esta vacia o no, inicializamos el tablero e introducimos una fila y una columna.
 * COMPLEJIDAD: O(n)
 */
void pruebaEstaVaciaCasilla();


/*
 * DESCRIPCION: probamos el metodo obtenerValorCasilla, que dada una casilla concreta del tablero
 * tendremos que sacar el valor que tiene dicha casilla, para ello, inicializamos el tablero, introducimos
 * una fila y una columna.
 * COMPLEJIDAD: O(n²)
 */
void pruebaObtenerValorCasilla();


/*
 * DESCRIPCION: probamos esBloqueCasillaTablero, que dado un valor, nos dice si una casilla
 * del tablero pertenece o no a un bloque, para ello, inicializamos el tablero e introducimos
 * la fila y la colunma, y el valor que queremos probar.
 * COMPLEJIDAD: O(n²)
 */
void pruebaEsBloqueCasillaTablero();


/*
 * DESCRIPCION: probamos hayBloque, que nos dice si hay algun bloque en el tablero o no,
 * inicializamos el tablero.
 * COMPLEJIDAD: O(n)
 */
void pruebaHayBloques();


/*
 * DESCRIPCION: probamos el metodo obtenerValorMax, nos dice el valor maximo de las casillas
 * del tablero, para ello, inicializamos el tablero.
 * COMPLEJIDAD: O(n²)
 */
void pruebaObtenerValorMax();


/*
 * DESCRIPCION: el metodo vaciarBloqueCasillaTablero vacia todas las casillas del bloque
 * al que pertenece dicha casilla, para ello, inicializamos el tablero e introducimos
 * una fila, una columna y el valor.
 * COMPLEJIDAD: O(n²)
 */
void pruebaVaciarBloqueCasillaTablero();


/*
 * DESCRIPCION: probamos el desplazarVaciasColumna, este metodo desplaza hacia abajo
 * aquellas columnas con numero que tienen casilla vacias debajo,
 * inicializamos el tablero e introducimos la columna.
 * COMPLEJIDAD: O(n)
 */
void pruebaDesplazarVaciasColumna();


/*
 * DESCRIPCION: probamos desplazarTadasColumnas, este desplaza todas las columnas
 * hacia abajo en todas las columnas del tablero, para ellos inicializamos el tablero.
 * COMPLEJIDAD: O(n)
 */
void pruebaDesplazarTodasColumnas();


/*
 * DESCRIPCION: el metodo rellenarPorArribaColumnaVacia, rellena por arriba todas las columnas que
 * esten vacias, inicializa tablero e introduce la columna.
 * COMPLEJIDAD: O(n)
 */
void pruebaRellenarPorArribaColumnaVacia();


/*
 * DESCRIPCION: probamos rellenarTodasColumnas, que rellena el tablero con valores aleatorios,
 * inicializamos el tablero.
 * COMPLEJIDAD: O(n)
 */
void pruebaRellenarTodasColumnas();


#endif /* PRUEBATABLERO_H_ */
