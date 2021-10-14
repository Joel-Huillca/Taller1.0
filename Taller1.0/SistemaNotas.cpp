
#include "SistemaNotas.h"
#include <string>
using namespace std;
SistemaNotas::SistemaNotas()
{

}

SistemaNotas::~SistemaNotas()
{
}

void SistemaNotas::menuIniciarSesion()
{
	string nombre;
	cout << "Nombre: " << ends;
	cin >> nombre;
	//Buscar si nombre es igual la Matriz de nombres
	//If (existe){}else {null o diferente}

	string codigo;
	cout << "Codigo: " << ends;
	cin >> codigo;


}

void SistemaNotas::menuPrincipal()
{
	
	cout << "Bienvenido\n" << endl;
	menuIniciarSesion();
	

}

bool SistemaNotas::comprobarEntradaDatosInt(string dato)
{
	int inicio = 0;
	if (dato.length() == 0) {
		return false;
	}

	if (dato[0] == '+' || dato[0] == '-') {
		inicio = 1;
		if (dato.length() == 1) {
			return false;
		}
	}

	for (int i = inicio; i < dato.length(); i++) {
		if (!(isdigit(dato[i]))) {
			return false;
		}
	}

	return true;
}

int SistemaNotas::recibirDato(string texto)
{
	string dato; 
	bool numValido = false;
	while (!numValido) {
		try {
			cout << texto;
			getline(cin, dato);
			numValido = comprobarEntradaDatosInt(dato);
			if (!(numValido)) {
				throw dato;
			}
		}
		catch (string dato) {
			cout << "El dato: " << dato << " No es un numero entero valido." << endl;
		}
	}
	return stoi(dato);
}
