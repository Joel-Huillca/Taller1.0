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
/*
Constructores de la clase Alumno
@param nombre - Nombre del Alumno
@param rut - Rut del Alumno
@param notaUno - Nota uno del Alumno
@param notaDos - Nota dos del Alumno 
@param notaTres - Nota tres del Alumno
@param apruebaTaller - Booleano si el alumno aprueba el taller
@param paralelo - paralelo del Alumno
@param numLista - numero de lista del Alumno
*/
	Alumno();
	Alumno(string nombre, string rut, float notaUno, float notaDos, float notaTres, bool apruebaTaller, int paralelo, int numLista);
/*
Get's  de la clase Alumno
*/
	string getNombre();
	string getRut();
	float getNotaUno();
	float getNotaDos();
	float getNotaTres();
	bool getApruebaTaller();
	int getParalelo();
	int getNumLista();
/*
Set's de la clase Alumno
@param notaPruebaRec - Nota de la prueba recuperativa 
*/
	float setNotaUno(float notaPruebaRec);
	float setNotaDos(float notaPruebaRec);
	float setNotaTres(float notaPruebaRec);

};

