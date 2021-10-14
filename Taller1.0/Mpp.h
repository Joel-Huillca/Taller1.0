#pragma once
#include <iostream>
#include <string>
#include "Nodo.h"

class Mpp
{
private:
	int ancho; // numero de columnas
	int largo; // numero de filas
	Nodo* ACOL;
	Nodo* AROW;
public:
	//constructores
	Mpp();
	Mpp(int ancho, int largo);

	//gets y sets
	int getAncho();
	int getLargo();
	void setAncho(int ancho);
	void setLargo(int largo);

	//metodos

	//destructor
	~Mpp();




	
};

