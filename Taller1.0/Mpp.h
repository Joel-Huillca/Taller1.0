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
	Nodo* AROW; //Vector de Nodos Filas

public:
/*
Constructores de la clase Mpp
@param ancho - Valor que se le asigna al ancho de la matriz
@paramn largo - Valor que se la asigna al largo de la matriz
*/
	Mpp();
	Mpp(int ancho, int largo);

/*
Se agrega un alumno a la matriz 
@param alumno - Es el tipo de dato que se agrega a la matriz, en este caso de la clase Alumno
@param columna - Valor de la columna que le corresponde
@param fila - Valor de la fila que le corresponde 
*/
	bool agregar(Alumno* alumno, int columna, int fila);
/*
Se busca por rut del alumno
@param rut - Variable que corresponde al rut del alumno
*/
	Nodo* buscar(string rut);
/*
Contador de reprobados por Taller 
*/
	int buscarReprobadosT();


/*
Get's de la clase MPP
*/
	int getAncho();
	int getLargo();
/*
Set's de la clase Mpp
@param ancho - Variable que corresponde al ancho de la matriz
@param largo - Variable que corresponde al largo de la matriz
*/
	void setAncho(int ancho);
	void setLargo(int largo);

/*
Destructor de la clase Mpp
*/
	~Mpp();

};

