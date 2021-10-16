#include "Mpp.h"

/*
Constructor vacio de la clase Mpp
*/
Mpp::Mpp()
{
}
/*
Constructor de la clase Mpp
@param ancho - Valor que se le asigna al ancho de la matriz
@paramn largo - Valor que se la asigna al largo de la matriz
*/
Mpp::Mpp(int ancho, int largo)
{
	this->ancho = ancho; //Tenemos 8 atributos de la txt y comienza en pos. 1
	this->largo = largo;
	ACOL = new Nodo[ancho + 1]; //El arreglo comienza desde la pos. 1
	AROW = new Nodo[largo + 1];
	
	for (int i = 1; i <= largo; i++)
	{
		ACOL[i].setUp(&ACOL[i]);
		ACOL[i].setFila(0);
	}
	for (int j = 1; j <= ancho ; j++)
	{
		AROW[j].setLeft(&AROW[j]);
		AROW[j].setColumna(0);
	}
}
/*
Se agrega un alumno a la matriz
@param alumno - Es el tipo de dato que se agrega a la matriz, en este caso de la clase Alumno
@param columna - Valor de la columna que le corresponde
@param fila - Valor de la fila que le corresponde
*/
bool Mpp::agregar(Alumno* alumno, int columna, int fila)
{	//Los axiliares se ocupan para moverse 

	//Buscar por fila
	Nodo* nodo = new Nodo(alumno, columna, fila);
	Nodo* aux = &AROW[fila];
	Nodo* buscarAlumno = buscar(nodo->getAlumno()->getRut());

	if (buscarAlumno != nullptr) {
		return false;
	}
	else {
		while (aux->getLeft()->getColumna() > 0 && aux->getLeft()->getColumna() > columna) {
			if (aux->getLeft()->getColumna() == columna)
			{
				return false;
			}

			aux = aux->getLeft();
		}

		nodo->setLeft(aux->getLeft());
		aux->setLeft(nodo);

		//Buscar por Columna
		Nodo* aux2 = &ACOL[columna];

		while (aux2->getUp()->getFila() > 0 && aux2->getUp()->getFila() > columna)
		{
			aux2 = aux2->getUp();
		}
		nodo->setUp(aux2->getUp());
		aux2->setUp(nodo);
		return true;
	}
}

/*
Se busca por rut del alumno
@param rut - Variable que corresponde al rut del alumno
*/

Nodo* Mpp::buscar(string rut)
{
	for (int i = 1 ; i <= ancho; i++)
	{
		Nodo* aux = ACOL[i].getUp();
		while (aux->getFila() > 0) {
			if (aux->getAlumno()->getRut()._Equal(rut) ){
				return aux;
			}
			aux = aux->getUp();
		}
	}
}
/*
Se buscan los Reprobados por Taller

int Mpp::buscarReprobadosT()
{

	int contFalso = 0;
	int contVerdadero = 0;
	for (int i = 1; i <=9; i++)
	{
		Nodo* aux = ACOL[i].getUp();
		string nombre  = aux->getAlumno()->getNombre();
		cout << nombre << endl;
		while (aux->getFila() > 0) {

			if (aux->getAlumno()->getApruebaTaller() == true) {
				
				contFalso++;
			}
			else {
				contVerdadero++;
			}
			aux = aux->getUp();
		}
	}
	cout << "Los reprobados son: " << " " << endl;
	cout << contFalso<<endl;
	cout << contVerdadero <<endl;

	return contVerdadero;

}
*/
/*
Get's de la clase Mpp
*/

int Mpp::getAncho() {return this->ancho;}
int Mpp::getLargo(){return this->largo;}

/*
Set's de la Clase Mpp
@param ancho - Variable que corresponde al ancho de la matriz
@param largo - Variable que corresponde al largo de la matriz
*/
void Mpp::setAncho(int ancho){this->ancho = ancho;}
void Mpp::setLargo(int largo){this->largo = largo;}

/*
Desructor de la clase Mpp
*/
Mpp::~Mpp()
{
}
