#include "Nodo.h"

Nodo::Nodo()
{
	this->up = this;
	this->left = this;
	this->alumno = nullptr;
	this->fila = 0;
	this->columna = 0;
}

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

Nodo::~Nodo()
{
}
