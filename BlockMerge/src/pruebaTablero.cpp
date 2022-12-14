/*
 * pruebaTablero.cpp
 *
 *  Created on: 18/1/2020
 *      Author: andrea
 */

#include "pruebaTablero.h"

void pruebaIniciarTablero() {
	cout<<"PRUEBA INICIAR TABLERO"<<endl;

	TadTablero tab;
	int matriz[8][8];
	matriz[0][0]=5;
	iniciarTablero(tab,matriz,8);

	cout<<"FIN PRUEBA INICIAR TABLERO"<<endl<<endl;
}

void pruebaObtenerTamReal() {
	cout<<"PRUEBA OBTENER TAMAÑO REAL"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	if (obtenerTamReal(tab)==8){
		cout<<"Funciona correctamente..."<<endl;
	}

	cout<<"FIN PRUEBA OBTENER TAMAÑO REAL"<<endl<<endl;

}

void pruebaPonerValorTablero() {
	cout<<"PRUEBA PONER VALOR"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	ponerValorTablero(tab,3,3,6);
	if(obtenerValor(tab.matriz[3][3])==6){
		cout<<"Funciona correctamente..."<<endl;
	}
	cout<<"FIN PRUEBA PONER VALOR"<<endl<<endl;
}

void pruebaVaciarCasillaTablero() {
	cout<<"PRUEBA VACIAR CASILLA DEL TABLERO"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	vaciarCasillaTablero(tab,3,3);
	if(!estaVaciaCasilla(tab,3,3))
		cout<<"Error"<<endl;
	else
		cout<<"Funciona correctamente..."<<endl;

	cout<<"FIN PRUEBA VACIAR CASILLA DEL TABLERO"<<endl<<endl;
}

void pruebaEstaVaciaCasilla() {
	cout<<"PRUEBA VACIA"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	ponerValorCasilla(tab.matriz[0][3],6);
	if(estaVaciaCasilla(tab,0,3))
		cout<<"Error"<<endl;
	else
		cout<<"Funciona correctamente..."<<endl;
	cout<<"FIN PRUEBA ESTA VACIA"<<endl<<endl;
}

void pruebaObtenerValorCasilla() {
	cout<<"PRUEBA OBTENER VALOR DE UNA CASILLA"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	ponerValorCasilla(tab.matriz[5][5],9);
	for(int i=0; i<tab.dimension;i++){
		for(int j=0; j<tab.dimension; j++){
			if(obtenerValorCasilla(tab,i,j)==9){
				cout<<"Funciona correctamente..."<<endl;
			}
		}
	}
	cout<<"FIN PRUEBA OBTENER VALOR DE UNA CASILLA"<<endl<<endl;
}

void pruebaEsBloqueCasillaTablero() {
	cout<<"PRUEBA CASILLA ES DE BLOQUE"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	ponerValorCasilla(tab.matriz[5][5],6);
	for(int i=0; i<tab.dimension;i++){
		for(int j=0; j<tab.dimension; j++){
			if(esBloqueCasillaTablero(tab,5,5,6)==true){
				cout<<"Funciona correctamente..."<<endl;
			}
		}
	}
	cout<<"FIN PRUEBA CASILLA ES DE BLOQUE"<<endl<<endl;
}

void pruebaHayBloques() {
	cout<<"PRUEBA HAY BLOQUE"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	if(hayBloques(tab)){
		cout<<"Funciona correctamente..."<<endl;
	}
	cout<<"FIN PRUEBA HAY BLOQUE"<<endl<<endl;
}

void pruebaObtenerValorMax() {
	cout<<"PRUEBA VALOR MAXIMO"<<endl;
	TadTablero tab;
	int mejor=0;
			int matriz[8][8];
			iniciarTablero(tab,matriz,8);
			ponerValorCasilla(tab.matriz[0][0],1);
			ponerValorCasilla(tab.matriz[0][1],8);
			for(int i=0; i<tab.dimension;i++){
				for(int j=0; j<tab.dimension; j++){
					if(mejor<= obtenerValor(tab.matriz[i][j])){
						mejor=obtenerValor(tab.matriz[i][j]);
					}
				}
			}
		cout<<"FIN PRUEBA VALOR MAXIMO"<<endl<<endl;
}

void pruebaVaciarBloqueCasillaTablero() {
	cout<<"PRUEBA VACIAR CASILLA DE BLOQUE"<<endl;
	TadTablero tab;
			int matriz[8][8];
			iniciarTablero(tab,matriz,8);
			for(int i=0; i<tab.dimension;i++){
				for(int j=0; j<tab.dimension; j++){
					if(hayBloques(tab)){
						vaciarBloqueCasillaTablero(tab,i,j,6);
					}
					else{
						cout<<"Error"<<endl;
					}

				}
			}
		cout<<"FIN PRUEBA VACIAR CASILLA DE BLOQUE"<<endl<<endl;
}

void pruebaDesplazarVaciasColumna() {
	cout<<"PRUEBA DESPLAZAR CASILLAS VACIAS"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	ponerValorTablero(tab,3,4,2);
	desplazarVaciasColumna(tab,4);
	cout<<"FIN PRUEBA DESPLAZAR CASILLAS VACIAS"<<endl<<endl;
}

void pruebaDesplazarTodasColumnas() {
	cout<<"PRUEBA DESPLAZAR TODAS"<<endl;
	TadTablero tab;
			int matriz[8][8];
			iniciarTablero(tab,matriz,8);
			desplazarVaciasColumna(tab,4);
			desplazarTodasColumnas(tab);
		cout<<"FIN PRUEBA DESPLAZAR TODAS"<<endl<<endl;
}

void pruebaRellenarPorArribaColumnaVacia() {
	cout<<"PRUEBA RELLENAR ARRIBA"<<endl;
	TadTablero tab;
			int matriz[8][8];
			iniciarTablero(tab,matriz,8);
		cout<<"FIN PRUEBA RELLENAR ARRIBA"<<endl<<endl;
}

void pruebaRellenarTodasColumnas() {
	cout<<"PRUEBA RELLENAR TODAS LAS COLUMNAS"<<endl;
	TadTablero tab;
	int matriz[8][8];
	iniciarTablero(tab,matriz,8);
	for(int columna=0; columna<tab.dimension;columna++){
		rellenarTodasColumnas(tab);
	}
	cout<<"FIN PRUEBA RELLENAR TODAS LAS COLUMNAS"<<endl<<endl;
}
