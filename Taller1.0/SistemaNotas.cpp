
#include "SistemaNotas.h"
#include <string>
using namespace std;
SistemaNotas::SistemaNotas()
{
}

SistemaNotas::~SistemaNotas()
{
}

void SistemaNotas::registrarNota()
{
	cout << "Favor de ingresar el RUT: ";
	string rut;
	getline(cin, rut);

	Nodo* rutAux = mpp->buscar(rut);
	if (rutAux != nullptr)
	{
		cout << "Ingrese la Nota: ";
		string notaAux;
		float notaPruebaRec;
		getline(cin, notaAux);
		try {
			notaPruebaRec = stof(notaAux);
		}
		catch (const std::exception) {
			cout << "Favor de ingresar correctamente\n";
			registrarNota();
		}
		if (notaPruebaRec > 7.0 || notaPruebaRec < 1.0)
		{
			cout << "La nota ingresada no es valida" << endl;
		}
		cout << "¿Que nota desea cambiar?. Ingrese [1] [2] o [3] dependiendo de la nota" << endl;
		string notaAcambiarAux;
		int notaAcambiar;
		getline(cin, notaAcambiarAux);
		try
		{
			notaAcambiar = stoi(notaAcambiarAux);
		}
		catch (const std::exception)
		{
			cout << "No es valido" << endl;
			registrarNota();
		}
		switch (notaAcambiar)
		{
		case 1:
		{
			if (rutAux->getAlumno()->getNotaUno() == 1.0)
			{
				rutAux->getAlumno()->setNotaUno(notaPruebaRec);
			}
			cout << "La nota a cambiar no cumple con los requisitos" << endl;
		}
		case 2:
		{
			if (rutAux->getAlumno()->getNotaDos() == 1.0)
			{
				rutAux->getAlumno()->setNotaDos(notaPruebaRec);
			}
			cout << "La nota a cambiar no cumple con los requisitos" << endl;
		}
		case 3:
		{
			if (rutAux->getAlumno()->getNotaTres() == 1.0)
			{
				rutAux->getAlumno()->setNotaTres(notaPruebaRec);
			}
			cout << "La nota a cambiar no cumple con los requisitos" << endl;
		}

		default:
			cout << "No es valido" << endl;
			break;
		}
		menuPrincipal();
	}
	cout << "el rut ingresado no es valido" << endl;
}

void SistemaNotas::cantEstudiantes_R()
{
}

void SistemaNotas::porcertanjeEstudiante_R()
{
}

void SistemaNotas::promedioFinal_C()
{
}

void SistemaNotas::filtarMatriz()
{
}


void SistemaNotas::menuIniciarSesion()
{
	//Alumno* alumno = new Alumno(nombre, rut, notaUno, notaDos, notaTres, apruebaTaller, paralelo, numLista);
	//cout << alumno->getNombre() << " " << alumno->getRut()<< endl; //comprobacion de lectura



	string nombre;
	cout << "Nombre: ";
	getline(cin, nombre);
	/*if (nombre._Equal())
	{

	}*/

	//Buscar si nombre existe dentro de la Matriz[][]
	//If (existe){}else {null o diferente}

	string codigo;
	cout<<  "Codigo:";
	getline(cin,codigo);
	if (codigo._Equal("123")) {
		cout << "Ya podemos iniciar...\n" << endl;
	}
	else
		cout << "**Contraseña incorrecta**\n\n";
}

void SistemaNotas::menuPrincipal()
{
	bool lecturaArch = false;


	cout << "_____.:Bienvenido:._____\n" << endl;
	menuIniciarSesion();
	bool salir = false;
	while (salir == false) {
		cout << "[1] Cargar archivos\n[2] Registrar Notas\n[3] Estadisticas\n[4] Elminar Estudiantes R.\n[5] Salir\n";
		string texto1 = "> Elija una opcion:";
		int opcion1 = recibirDato(texto1);
		switch (opcion1)
		{
		case 1:
		{
			if (lecturaArch == false)
			{
				leerArchivo();
				cout << "Se a cargado el archivo al sistema \n\n";
				lecturaArch = true;
			}
			else {
				cout << "Ya tiene cargada la informacion al sistema \n\n";
			}
		}
		break;


		case 2:
		{
			if (lecturaArch == true)
			{
				registrarNota();
			}
			else
			{
				cout << "Favor de '[1] Cargar archivos'\n";
			}

		}
		break;
		case 3:
		{
			if (lecturaArch == true)
			{
				cout << "          |ESTADISTICAS|" << endl;
				cout << "[1] Cantidad de estudiantes que esten reprobando el Taller por paralelo" << endl;
				cout << "[2] % Total de estudiantes que estan reprobando el Curso" << endl;
				cout << "[3] Promedio final de catedras por cada estudiante " << endl;
				string texto2 = "> Elija una opcion:";
				int opcion2 = recibirDato(texto2);
				switch (opcion2)
				{
				case 1:
				{cout << "11111111111111\n";
					//int cantEstR = cantEstudiantes_R();
				}
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
			else
			{
				cout << "Favor de '[1] Cargar archivos'\n";
			}

		}
		break;


		case 4:
		{
			filtarMatriz();
		}
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
		bool apruebaTaller;      
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

		notaUno = stof(notaUnoAux);
		notaDos = stof(notaDosAux);
		notaTres = stof(notaTresAux);
		paralelo = stoi(paraleloAux);
		numLista = stoi(numListaAux);

		transform(nombre.begin(), nombre.end(), nombre.begin(), :: toupper);

		if (apruebaTallerAux == "verdadero"){
			apruebaTaller = true;
		}
		else {
			apruebaTaller = false;
		}
		
		Alumno* alumno = new Alumno(nombre, rut, notaUno, notaDos, notaTres, apruebaTaller, paralelo, numLista);
		//cout << alumno->getNombre() << " " << alumno->getRut()<< endl; //comprobacion de lectura


		bool resp = this->mpp->agregar(alumno,paralelo,numLista);

		if (resp == true) {
			cout << alumno->getNombre() << endl;
		}
	}

	archivo.close();
	
}// Lectura de arch

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

