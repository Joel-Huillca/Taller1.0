#include "Nodo.h"
/*
Constructor vacio de la clase Nodo
*/
Nodo::Nodo()
{
	this->up = this;
	this->left = this;
	this->alumno = nullptr;
	this->fila = 0;
	this->columna = 0;
}
/*
Constructor de la clase Nodo
@param alumno - Valor que se le asigna al nodo de tipo clase Alumno
@param fila - Variable que corresponde a la fila del nodo
@param columna - Variable que corresponde a la columna del nodo
*/
Nodo::Nodo(Alumno* alumno, int fila, int columna)
{
	this->alumno = alumno;
	this->fila = fila;
	this->columna = columna;
	this->up = nullptr;
	this->left = nullptr;
}

Nodo::Nodo(int fila, int columna)
{
	this->fila = fila;
	this->columna = columna;
}

/*
Get's de la clase Nodo
*/
Nodo* Nodo::getUp()
{
	return this->up;
}

Nodo* Nodo::getLeft()
{
	return this->left;
}

Alumno* Nodo::getAlumno()
{
	return this->alumno;
}

int Nodo::getFila()
{
	return this->fila;
}

int Nodo::getColumna()
{
	return this->columna;
}

/*
Set's de la clase Nodo
@param up - Nodo que hace referencia al que esta arriba
@param left - Nodo que hace referencia al que esta a la izquierda
@param alumno - Valor que se le asigna al nodo de tipo clase Alumno
@param fila - Variable que corresponde a la fila del nodo
@param columna - Variable que corresponde a la columna del nodo
*/
void Nodo::setUp(Nodo* up)
{
	this->up = up;
}

void Nodo::setLeft(Nodo* left)
{
	this->left = left;
}

void Nodo::setAlumno(Alumno* alumno)
{
	this->alumno = alumno;
}

void Nodo::setFila(int fila)
{
	this->fila = fila;
}

void Nodo::setColumna(int columna)
{
	this->columna = columna;
}

/*
Destructor de la clase Nodo
*/
Nodo::~Nodo()
{
}
