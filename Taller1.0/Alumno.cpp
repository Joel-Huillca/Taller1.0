#include "Alumno.h"

Alumno::Alumno()
{
}

Alumno::Alumno(string nombre, string rut, float notaUno, float notaDos, float notaTres, bool apruebaTaller, int paralelo, int numLista)
{
	this->nombre = nombre;
	this->rut = rut;
	this->notaUno = notaUno;
	this->notaDos = notaDos;
	this->notaTres = notaTres;
	this->apruebaTaller = apruebaTaller;
	this->paralelo = paralelo;
	this->numLista = numLista;
}

string Alumno::getNombre()
{
	return nombre;
}

string Alumno::getRut()
{
	return rut;
}

float Alumno::getNotaUno()
{
	return notaUno;
}

float Alumno::getNotaDos()
{
	return notaDos;
}

float Alumno::getNotaTres()
{
	return notaTres;
}

bool Alumno::getApruebaTaller()
{
	return apruebaTaller;
}

int Alumno::getParalelo()
{
	return paralelo;
}

int Alumno::getNumLista()
{
	return numLista;
}

float Alumno::setNotaUno(float notaPruebaRec)
{
	return this->notaUno = notaPruebaRec;
}

float Alumno::setNotaDos(float notaPruebaRec)
{
	return this->notaDos = notaPruebaRec;
}

float Alumno::setNotaTres(float notaPruebaRec)
{
	return this->notaTres = notaPruebaRec;
}
