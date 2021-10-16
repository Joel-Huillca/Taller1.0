
#include <iostream>
#include "SistemaNotas.h"

using namespace std;

int main()
/*
Main del programa
Solo se llama a la clase Sistema para que llame a los demas atributos
*/
{
	SistemaNotas* sistema = new SistemaNotas;
	sistema->menuPrincipal();
	sistema->~SistemaNotas();
	return 0;
}

