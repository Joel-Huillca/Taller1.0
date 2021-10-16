#pragma once
#include "Alumno.h"
class Nodo
{
private:
	Nodo* up;
	Nodo* left;
	Alumno* alumno;
	int fila;
	int columna;
public:
	//Constructores
	Nodo();
	Nodo(Alumno* alumno, int fila, int columna);
	Nodo(int fila, int columna);// Es para el AROW y el ACOL

	//gets y sets
	Nodo* getUp();
	
	Nodo* getLeft();
	Alumno* getAlumno();
	int getFila();
	int getColumna();

	void setUp(Nodo* up);
	void setLeft(Nodo* left);
	void setAlumno(Alumno* alumno);
	void setFila(int fila);
	void setColumna(int columna);
	
	//Destructor
	~Nodo();
};

