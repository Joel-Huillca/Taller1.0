
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
	cout << "Nombre: ";
	getline(cin, nombre);
	//Buscar si nombre existe dentro de la Matriz[][]
	//If (existe){}else {null o diferente}

	string codigo;
	cout<<  "Codigo:";
	getline(cin,codigo);
	if (codigo._Equal("holi")) {
		cout << "Ya podemos iniciar...\n" << endl;
	}
}

void SistemaNotas::menuPrincipal()
{
	
	cout << "_____.:Bienvenido:._____\n" << endl;
	menuIniciarSesion();
	bool salir = false;
	while (salir == false) {
		cout << "[1] Cargar archivos\n[2] Registrar Notas\n[3] Estadisticas\n[4] Elminar Estudiantes R.\n[5] Salir"<<endl;
		string texto1 = "> Elija una opcion:";
		int opcion1 = recibirDato(texto1);
		switch (opcion1)
		{
		case 1:
		{}
		break;
		case 2:
		{}
		break;
		case 3:
		{
			cout << "          |ESTADISTICAS|"<<endl;
			cout << "[1] Cantidad de estudiantes que esten reprobando el Taller por paralelo"<<endl;
			cout << "[2] % Total de estudiantes que estan reprobando el Curso" << endl;
			cout << "[3] Promedio final de catedras por cada estudiante " << endl;
			string texto2 = "> Elija una opcion:";
			int opcion2 = recibirDato(texto2);
			switch (opcion2)
			{
			case 1:
			{cout << "11111111111111";}
			break;
			case 2:
			{cout << "222222222222"; }
			break; 
			case 3:
			{cout << "333333333333"; }
			break;

			default:
				cout << "La opcion ingresada no es valida, intente de nuevo...\n" << endl;
				break;
			}//Fin del menu_2

		}
		break;
		case 4:
		{}
		break;
		case 5:
		{
			salir = true;
			cout << "___El sistema a finalizado___\n  Que tenga un excelente dia"<<endl;
		}
		break;
		default:
			cout <<"La opcion ingresada no es valida, intente de nuevo...\n" << endl;
			break;
		}//fin del Menu
		

	}

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

void SistemaNotas::leerArchivo()
{
	ifstream archivo("estudiantes.txt");
	string linea = "";

	while (getline(archivo, linea)) {
		string nombre;
		string rut;

		string notaUnoAux;
		float notaUno;

		string notaDosAux;
		float notaDos;

		string notaTresAux;
		float notaTres;

		string apruebaTallerAux;
		bool apruebaTaller;      //--

		string paraleloAux;
		int paralelo;

		string numListaAux;
		int numLista;

		stringstream s(linea);
		getline(s, nombre, ',');
		getline(s, rut, ',');
		rut.erase(remove(rut.begin(), rut.end(), ' '), rut.end() );

		getline(s, notaUnoAux, ',');
		getline(s, notaDosAux, ',');
		getline(s, notaTresAux, ',');
		getline(s, apruebaTallerAux, ',');

		apruebaTallerAux.erase(remove(apruebaTallerAux.begin(), apruebaTallerAux.end(), ' '), apruebaTallerAux.end());

		getline(s, paraleloAux, ',');
		getline(s, numListaAux, ',');

		notaUno = stoi(notaUnoAux);
		notaDos = stoi(notaDosAux);
		notaTres = stoi(notaTresAux);

		transform(nombre.begin(), nombre.end(), nombre.begin(), :: toupper);

		if (apruebaTallerAux == "verdadero"){
			apruebaTaller = true;
		}
		else {
			apruebaTaller = false;
		}
		
		Alumno* alumno = new Alumno(nombre, rut, notaUno, notaDos, notaTres, apruebaTaller, paralelo, numLista);
		
		bool agregar = this->mpp->agregar(alumno,paralelo,numLista);
		if (agregar = true)
		{
			cout << alumno->getNombre() << endl;
		}

	}

	archivo.close();
}
