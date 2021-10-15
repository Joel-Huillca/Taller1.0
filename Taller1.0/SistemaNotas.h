
#pragma once

#include "Mpp.h"
#include "Nodo.h"
#include "Alumno.h"


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
public:
	SistemaNotas();

	~SistemaNotas();

	void menuIniciarSesion();

	void menuPrincipal();

	bool comprobarEntradaDatosInt(string dato);

	int recibirDato(string texto);

	void leerArchivo();







};

