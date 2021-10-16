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
/*
Constructores de la clase Nodo
@param alumno - Valor que se le asigna al nodo de tipo clase Alumno
@param fila - Variable que corresponde a la fila del nodo
@param columna - Variable que corresponde a la columna del nodo

*/
	Nodo();
	Nodo(Alumno* alumno, int fila, int columna);
	Nodo(int fila, int columna);// Es para el AROW y el ACOL

/*
Get's de la clase Nodo
*/
	Nodo* getUp();
	Nodo* getLeft();
	Alumno* getAlumno();
	int getFila();
	int getColumna();
/*
Set's de la clase Nodo
@param up - Nodo que hace referencia al que esta arriba
@param left - Nodo que hace referencia al que esta a la izquierda
@param alumno - Valor que se le asigna al nodo de tipo clase Alumno
@param fila - Variable que corresponde a la fila del nodo
@param columna - Variable que corresponde a la columna del nodo
*/
	void setUp(Nodo* up);
	void setLeft(Nodo* left);
	void setAlumno(Alumno* alumno);
	void setFila(int fila);
	void setColumna(int columna);

/*
Destructor de la clase Nodo
*/
	~Nodo();
};

