
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
/*
Constructor de la clase SistemaNotas
*/
	SistemaNotas();
/*
Destructor de la clase SistemaNotas
*/
	~SistemaNotas();
/*
Se registra la nota de la prueba recuperativa y se cambia por cualquiera de las 3 notas de catedra siempre y cuando estas hayan sido un 1.0
*/
	void registrarNota();
/*
Cantidad de estudiantes reprobados
*/
	void cantEstudiantes_R();
/*
Porcentaje de estudiantes reprobados (se considera los que deben rendir examen)
*/
	void porcertanjeEstudiante_R();
/*
Promedio final de las catedras para los estudiantes registrados
*/
	void promedioFinal_C();
/*
Filtra la matriz eliminando a los estudiantes que hayan reprobado por taller
*/
	void filtarMatriz();
/*
Menu para iniciar sesion la cual pide nombre y codigo
*/
	void menuIniciarSesion();
/*
Menu principal con todas las funcionalidades 
*/
	void menuPrincipal();
/*
Comprueba la entrada de datos
*/
	bool comprobarEntradaDatosInt(string dato);
/*
Verifica si la opcion ingresada es correcto para el Menu
*/
	int recibirDato(string texto);
/*
Lee el archivo de texto como una matriz poco poblada
*/
	void leerArchivo();
/*
Finaliza la ejecucion del sistema
*/
	void salirSistema();





};

