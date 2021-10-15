#pragma once
#include <iostream>
#include <string>
#include "Nodo.h"

class Mpp
{
private:
	int ancho; // numero de columnas
	int largo; // numero de filas
	
	int ColumnaAct; //Columna actual
	int filaAct; //Fila actual 

	Nodo* ACOL; //Vector de Nodos Columnas
	Nodo* AROW; //Vectoe de Nodos Filas

public:
	//constructores
	Mpp();
	Mpp(int ancho, int largo);

	//metodos
	void agregar(Alumno* alumno, int columna, int fila);
	Nodo* buscar(string rut);
	



	//gets y sets
	int getAncho();
	int getLargo();
	void setAncho(int ancho);
	void setLargo(int largo);



	//destructor
	~Mpp();

};

