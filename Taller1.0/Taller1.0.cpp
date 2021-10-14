
#include <iostream>
#include "SistemaNotas.h"

using namespace std;

int main()
{
	SistemaNotas* sistema = new SistemaNotas;
	sistema->menuPrincipal();
	sistema->~SistemaNotas();
	return 0;
}

