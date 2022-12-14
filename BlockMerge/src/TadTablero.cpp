/*
 * TadTablero.cpp
 *
 *  Created on: 6/12/2019
 *      Author: andrea
 */

#include "TadTablero.h"

void iniciarTableroAleatorio(TadTablero& tab, int dimension, int num) {
	int i, j;
	tab.dimension=dimension;
	for(i=0; i<dimension; i++){
		for(j=0; j<dimension; j++){
			ponerValorCasilla(tab.matriz[i][j], 1+rand()%num);
		}
	}
}

void iniciarTablero(TadTablero& tab, int m[MAX][MAX], int dimension) {
	int i, j;
	tab.dimension=dimension;
	for(i=0; i<dimension; i++){
		for(j=0; j<dimension; j++){
			ponerValorCasilla(tab.matriz[i][j], m[i][j]);
		}
	}
}

int obtenerTamReal(TadTablero tab) {
	return tab.dimension;
}

void ponerValorTablero(TadTablero& tab, int fila, int columna, int valor) {
	if(fila>=0&&columna>=0&&fila<tab.dimension&&columna<tab.dimension){
		ponerValorCasilla(tab.matriz[fila][columna], valor);
	}
}

void vaciarCasillaTablero(TadTablero& tab, int fila, int columna) {
	if(fila>=0&&columna>=0&&fila<tab.dimension&&columna<tab.dimension){
			vaciarCasilla(tab.matriz[fila][columna]);
		}
}

bool estaVaciaCasilla(TadTablero tab, int fila, int columna) {
	bool vacia=true;
	if(fila>=0&&columna>=0&&fila<tab.dimension&&columna<tab.dimension){
			vacia=obtenerVacia(tab.matriz[fila][columna]);
	}
	return vacia;
}

int obtenerValorCasilla(TadTablero tab, int fila, int columna) {
	int valor=0;
	if(fila>=0&&columna>=0&&fila<tab.dimension&&columna<tab.dimension){
			valor=obtenerValor(tab.matriz[fila][columna]);
		}
	return valor;
}

bool esBloqueCasillaTablero(TadTablero tab, int fila, int columna, int valor) {
	bool esBloque=false;
	if(fila>0){//mira arriba
		if(obtenerValor(tab.matriz[fila-1][columna])==valor){
			esBloque=true;
		}
	}
	if(fila<tab.dimension-1){//mira abajo
		if(obtenerValor(tab.matriz[fila+1][columna])==valor){
			esBloque=true;
		}
	}
	if(columna>0){//mira derecha
		if(obtenerValor(tab.matriz[fila][columna-1])==valor){
			esBloque=true;

		}
	}
	if(columna<tab.dimension-1){//mira izquierda
		if(obtenerValor(tab.matriz[fila][columna+1])==valor){
			esBloque=true;

		}
	}
	return esBloque;
}

bool hayBloques(TadTablero tab) {
	bool hayBloque=false;
	int i=0;
	int j=0;

	while(i<tab.dimension&&!hayBloque){
		j=0;
		while(j<tab.dimension&&!hayBloque){
			if(esBloqueCasillaTablero(tab,i,j,obtenerValor(tab.matriz[i][j]))){
				hayBloque=true;
			}
			j++;
		}
		i++;
	}


	return hayBloque;
}

int obtenerValorMax(TadTablero tab) {
	int mejorValor=0;
	for (int i = 0; i < tab.dimension; ++i) {
		for (int j = 0; j < tab.dimension; ++j) {
			if(obtenerValor(tab.matriz[i][j])>mejorValor)
				mejorValor=obtenerValor(tab.matriz[i][j]);
		}
	}
	return mejorValor;
}

void vaciarBloqueCasillaTablero(TadTablero &tab, int fila, int columna, int valor) {
	if(fila>=0&&columna>=0&&fila<tab.dimension&&columna<tab.dimension){
		if(!obtenerVacia(tab.matriz[fila][columna])){
			if(obtenerValor(tab.matriz[fila][columna])==valor){
				vaciarCasilla(tab.matriz[fila][columna]);
				vaciarBloqueCasillaTablero(tab, fila+1, columna, valor);
				vaciarBloqueCasillaTablero(tab, fila-1, columna, valor);
				vaciarBloqueCasillaTablero(tab, fila, columna+1, valor);
				vaciarBloqueCasillaTablero(tab, fila, columna-1, valor);
			}
		}
	}
}

void desplazarVaciasColumna(TadTablero& tab, int col) {
	int eliminadas=0;
	for (int fila = tab.dimension-1; fila >= 0; fila--) {
		if(obtenerVacia(tab.matriz[fila][col])){
			eliminadas++;
		}
		else{
			ponerValorCasilla(tab.matriz[fila+eliminadas][col], obtenerValor(tab.matriz[fila][col]));
		}
	}
	for (int i = 0; i < eliminadas; ++i) {
		vaciarCasilla(tab.matriz[i][col]);
	}
}

void desplazarTodasColumnas(TadTablero& tab) {
	for (int col = 0; col < tab.dimension; ++col) {
		desplazarVaciasColumna(tab, col);
	}
}

void rellenarPorArribaColumnaVacia(TadTablero& tab, int col) {
	bool enc=false;
	int fila=0;
	while(fila<tab.dimension&&!enc){
		if(obtenerVacia(tab.matriz[fila][col])){
			ponerValorCasilla(tab.matriz[fila][col], 1+rand()%(obtenerValorMax(tab)-1));
			fila++;
		}
		else{
			enc=true;
		}
	}
}

void rellenarTodasColumnas(TadTablero& tab) {
	for (int col = 0; col < tab.dimension; ++col) {
		rellenarPorArribaColumnaVacia(tab, col);
	}
}
