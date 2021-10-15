
#pragma once

#include "Mpp.h"
#include "Nodo.h"
#include "Alumno.h"

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

class SistemaNotas
{
private:
	int ancho = 9;
	int largo = 26;
	Mpp* mpp = new Mpp(ancho, largo);
	//bool leerArch = false;


public:
	SistemaNotas();

	~SistemaNotas();

	void menuIniciarSesion();

	void menuPrincipal();

	bool comprobarEntradaDatosInt(string dato);

	int recibirDato(string texto);

	void leerArchivo();







};

