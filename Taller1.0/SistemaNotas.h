
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

public:
	SistemaNotas();

	~SistemaNotas();

	void registrarNota();

	void cantEstudiantes_R();

	void porcertanjeEstudiante_R();

	void promedioFinal_C();

	void filtarMatriz();

	void menuIniciarSesion();

	void menuPrincipal();

	bool comprobarEntradaDatosInt(string dato);

	int recibirDato(string texto);

	void leerArchivo();







};

