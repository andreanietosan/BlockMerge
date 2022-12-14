/*
 * TadCasilla.h
 *
 *  Created on: 2/12/2019
 *      Author: andrea
 */

#ifndef TADCASILLA_H_
#define TADCASILLA_H_

struct TadCasilla {
	int valor;
	bool vacia;
};

/*
 * PRE: {}
 * POST: {inicializar el esta vacia a true}
 * COMPLEJIDAD: O(1)
 */
void iniciarCasilla(TadCasilla &c);

/*
 * PRE: {la casilla no tiene que estar vacia inicualmente y el 0 < valor < 9}
 * POST: {poner el valor en la casilla correspondiente}
 * COMPLEJIDAD: O(1)
 */
void ponerValorCasilla(TadCasilla &c, int valor);

/*
 * PRE: {la casilla no este vacia}
 * POST: {obtenemos el valor de la casilla}
 * COMPLEJIDAD: O(1)
 */
int obtenerValor(TadCasilla c);

/*
 * PRE: {la casilla tiene que estar llena de un valor inicialmente}
 * POST: {vaciar la casilla dejando el bool vacia a true}
 * COMPLEJIDAD: O(1)
 */
void vaciarCasilla(TadCasilla &c);

/*
 * PRE: {la casilla tiene que estar vacia}
 * POST: {obtenemos si la casilla esta vacia}
 * COMPLEJIDAD: O(1)
 */
bool obtenerVacia(TadCasilla c);

#endif /* TADCASILLA_H_ */


/*
 * PRE:
 * POST:
 * COMPLEJIDAD: O()
 */
