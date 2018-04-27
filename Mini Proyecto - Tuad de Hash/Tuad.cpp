#include "Tuad.h"



Tuad::Tuad()
{
}


Tuad::~Tuad()
{
}

void Tuad::mostrar()
{
	int i;
	cout << "tam" << endl;
	cin >> i;
	
	lista[i].mostrar();

}
void Tuad::leerArch()
{
	string palabra;
	ifstream nombres("cienanos.txt");
	while (!nombres.eof())
	{
		nombres >> palabra;
		int aux = palabra.length();
		lista[aux].agregar(palabra);
		lista[aux].activarMostrar();
	}
}

void Tuad::buscarPalabra()
{
	string aux;
	cin >> aux;
	int aux2 = aux.length();
	lista[aux2].buscar(aux);
}
void Tuad::menu()
{
	int resp;
	do {
		cout << "1 Buscar Palabra" << endl;
		cout << "2 Mostrar Longitud" << endl;
		cout << "3 Salir" << endl;
		

		cin >> resp;

		switch (resp)
		{
		case 1:
			buscarPalabra();
			cout << endl;
			break;

		case 2:
			mostrar();
			cout << endl;
			break;
		}

	} while (resp != 3);
	
}