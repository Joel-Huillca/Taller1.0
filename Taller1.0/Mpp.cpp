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

bool Mpp::agregar(Alumno* alumno, int columna, int fila)
{	//Los axiliares se ocupan para moverse 

	//Buscar por fila
	Nodo* nodo = new Nodo(alumno, columna, fila);
	Nodo* aux = &AROW[fila];
	Nodo* buscarAlumno = buscar(nodo->getAlumno()->getRut());

	if (buscarAlumno != nullptr) {
		return false;
	}
	else {
		while (aux->getLeft()->getColumna() > 0 && aux->getLeft()->getColumna() > columna) {
			if (aux->getLeft()->getColumna() == columna)
			{
				return false;
			}

			aux = aux->getLeft();
		}

		nodo->setLeft(aux->getLeft());
		aux->setLeft(nodo);

		//Buscar por Columna
		Nodo* aux2 = &ACOL[columna];

		while (aux2->getUp()->getFila() > 0 && aux2->getUp()->getFila() > columna)
		{
			aux2 = aux2->getUp();
		}
		nodo->setUp(aux2->getUp());
		aux2->setUp(nodo);
		return true;
	}
}


Nodo* Mpp::buscar(string rut)
{
	for (int i = 1 ; i <= ancho; i++)
	{
		Nodo* aux = ACOL[i].getUp();
		while (aux->getFila() > 0) {
			if (aux->getAlumno()->getRut()._Equal(rut) ){
				return aux;
			}
			aux = aux->getUp();
		}
	}
}

void Mpp::buscarReprobadosT()
{
	/*
	int cont = 0;
	for (int i = 1; i <= ancho; i++)
	{
		Nodo* aux = ACOL[i].getUp();
		while (aux->getFila() > 0) {
			if (aux->getAlumno()->getApruebaTaller()._Equal("verdadero")) {
				cont++;
			}
			aux = aux->getUp();
		}
	}
	//return cont;

	*/
}





int Mpp::getAncho() {return this->ancho;}

int Mpp::getLargo(){return this->largo;}

void Mpp::setAncho(int ancho){this->ancho = ancho;}

void Mpp::setLargo(int largo){this->largo = largo;}





Mpp::~Mpp()
{
}
