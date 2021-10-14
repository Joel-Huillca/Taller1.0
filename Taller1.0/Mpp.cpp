#include "Mpp.h"

Mpp::Mpp()
{
}

Mpp::Mpp(int ancho, int largo)
{
	this->ancho = ancho;
	this->largo = largo;
	ACOL = new Nodo[ancho + 1];
	AROW = new Nodo[largo + 1];
	

}

int Mpp::getAncho()
{
	return this->ancho;
}

int Mpp::getLargo()
{
	return this->largo;
}

void Mpp::setAncho(int ancho)
{
	this->ancho = ancho;
}

void Mpp::setLargo(int largo)
{
	this->largo = largo;
}









Mpp::~Mpp()
{
}
