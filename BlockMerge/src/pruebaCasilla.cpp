/*
 * pruebaCasilla.cpp
 *
 *  Created on: 10/12/2019
 *      Author: andrea
 */

#include "pruebaCasilla.h"

void pruebaCasilla() {
	TadCasilla c;
	cout<<"INICIO: PRUEBAS CASILLAS"<<endl;

	iniciarCasilla(c);
	if(obtenerVacia(c) != true)
		cout<<"Error al iniciar la casilla"<<endl;

	ponerValorCasilla(c, 4);
	if(obtenerValor(c) != 4)
		cout<<"Error al obtener el valor de la casilla"<<endl;
	if(obtenerVacia(c) == true)
		cout<<"Error al obtener vacia de la casilla"<<endl;

	vaciarCasilla(c);
	if(obtenerVacia(c) != true)
		cout<<"Error al vaciar la casilla"<<endl;

	cout<<"FIN: PRUEBAS CASILLAS"<<endl;
}
