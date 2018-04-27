#ifndef Lista8_h
#define Lista8_h
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "Casilla.h"

class Lista8
{
private:
	Casilla* primer;
	Casilla* ultimo;
	bool activa;
public:
	Lista8();
	~Lista8();
	void insertarFinal(string e);
	void insertarPrincipio(string e);
	void mostrarLista();
	void eliminarUltimo();
	void eliminarPrincipio();
	void insertarEnSuLugar(string e);
	void eliminarLista();
	Casilla* buscarNoRecursivo(string e);
	Casilla* getPrimer();
	Casilla* getUltimo();
	void activaMostrar();
	bool getActivaMostrar();


};

#endif