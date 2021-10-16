#pragma once
#include <iostream>
#include <string>
#include "Nodo.h"

class Mpp
{
private:
	int ancho; // numero de columnas
	int largo; // numero de filas

	Nodo* ACOL; //Vector de Nodos Columnas
	Nodo* AROW; //Vector de Nodos Filas

public:
	//Constructores
	Mpp();
	Mpp(int ancho, int largo);


	//Metodos
	bool agregar(Alumno* alumno, int columna, int fila);
	Nodo* buscar(string rut);
	
	int buscarReprobadosT();


	//gets y sets
	int getAncho();
	int getLargo();
	void setAncho(int ancho);
	void setLargo(int largo);

	//destructor
	~Mpp();

};

