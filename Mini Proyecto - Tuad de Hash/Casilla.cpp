#include "Casilla.h"

Casilla::Casilla(void)
{
	Anterior = NULL;
	Siguiente = NULL;
	cant = 1;
}

Casilla::~Casilla(void)
{

}
Casilla::Casilla(string a)
{

	palabra = a;
}
void Casilla::mostrar()
{
	cout<<" "<< palabra << " " << cant << "--";

}
string Casilla::getElemento()
{
	return palabra;
}


Casilla* Casilla::getAnterior()
{
	return Anterior;
}
/////

int Casilla::getCant()
{
	return cant;
}
void Casilla::addCant()
{
	cant++;
}
////

Casilla* Casilla::getSiguiente()
{
	return Siguiente;
}

void Casilla::setElemento(Casilla n)
{
	
	palabra = n.palabra;
}


void Casilla::setAnterior(Casilla* o)
{
	Anterior = o;
}

void Casilla::setSiguiente(Casilla* o)
{
	Siguiente = o;
}