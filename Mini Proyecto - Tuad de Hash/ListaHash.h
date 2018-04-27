#pragma once
#include "Lista8.h"
#include "Casilla.h"
#include <math.h>
#include <string>
#define TAM 1003
class ListaHash
{
public:
	ListaHash();
	~ListaHash();
	void mostrar();
	void agregar(string a);
	void eliminar(string a);
	int funcion(string a);
	void buscar(string a);
	void activarMostrar();
	bool getActivarDeMostrar();
private:
	
	Lista8 Lista[TAM];
	bool activa;
};

