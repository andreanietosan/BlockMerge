/*
 * TadCasilla.cpp
 *
 *  Created on: 2/12/2019
 *      Author: andrea
 */

#include "TadCasilla.h"

void iniciarCasilla(TadCasilla &c) {
	c.valor=0;
	c.vacia=true;
}

void ponerValorCasilla(TadCasilla &c, int valor) {
	c.valor=valor;
	c.vacia=false;
}

int obtenerValor(TadCasilla c) {
	return c.valor;
}

void vaciarCasilla(TadCasilla &c) {
	c.valor=0;
	c.vacia=true;
}

bool obtenerVacia(TadCasilla c){
	return c.vacia;
}
