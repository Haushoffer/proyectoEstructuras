#pragma once
#include "ListaHash.h"
class Tuad
{
public:
	Tuad();
	~Tuad();
	void mostrar();
	void leerArch();
	void buscarPalabra();
	void menu();
private:
	ListaHash lista[30];
	
};

