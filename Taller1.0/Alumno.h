#pragma once
#include <iostream>
#include <string>
using namespace std;

class Alumno
{
private:
	string nombre;
	string rut;
	float notaUno;
	float notaDos;
	float notaTres;
	bool apruebaTaller;
	int paralelo;
	int numLista;
public:
	//constructores
	Alumno();
	Alumno(string nombre, string rut, float notaUno, float notaDos, float notaTres, bool apruebaTaller, int paralelo, int numLista);

	//gets y sets
	string getNombre();
	string getRut();
	float getNotaUno();
	float getNotaDos();
	float getNotaTres();
	bool getApruebaTaller();
	int getParalelo();
	int getNumLista();

	float setNotaUno(float notaPruebaRec);
	float setNotaDos(float notaPruebaRec);
	float setNotaTres(float notaPruebaRec);

};

