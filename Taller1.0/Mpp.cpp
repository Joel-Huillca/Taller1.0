#include "Mpp.h"

Mpp::Mpp()
{
}

Mpp::Mpp(int ancho, int largo)
{
	this->ancho = ancho; //Tenemos 8 atributos de la txt y comienza en pos. 1
	this->largo = largo;
	ACOL = new Nodo[ancho + 1]; //El arreglo comienza desde la pos. 1
	AROW = new Nodo[largo + 1];
	
	for (int i = 1; i <= largo; i++)
	{
		ACOL[i].setUp(&ACOL[i]);
		ACOL[i].setFila(0);
	}
	for (int j = 1; j <= ancho ; j++)
	{
		AROW[j].setLeft(&AROW[j]);
		AROW[j].setColumna(0);
	}
}

void Mpp::agregar(Alumno* alumno, int columna, int fila)
{
	Nodo* nodo = new Nodo(alumno, columna, fila);

}

Nodo* Mpp::buscar(string rut)
{
	return nullptr;
}



int Mpp::getAncho() {return this->ancho;}

int Mpp::getLargo(){return this->largo;}

void Mpp::setAncho(int ancho){this->ancho = ancho;}

void Mpp::setLargo(int largo){this->largo = largo;}





Mpp::~Mpp()
{
}
