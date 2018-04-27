#ifndef Casilla_h
#define Casilla_h
#include <iostream>
#include <string>
using namespace std;

class Casilla
{
private:
	string palabra;
	Casilla* Anterior;
	Casilla* Siguiente;
	int cant;
public:
	Casilla();
	~Casilla();
	Casilla(string a);
	void mostrar();
	string getElemento();
	Casilla* getAnterior();
	Casilla* getSiguiente();
	void setElemento(Casilla n);
	void setAnterior(Casilla* o);
	void setSiguiente(Casilla* o);
	void addCant();
	int getCant();

};




#endif