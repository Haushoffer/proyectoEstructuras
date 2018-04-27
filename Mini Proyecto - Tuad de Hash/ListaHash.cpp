#include "ListaHash.h"



ListaHash::ListaHash()
{

	activa = false;
}


ListaHash::~ListaHash()
{
}

void ListaHash::mostrar()
{

	for (int i = 0; i < TAM; i++)
	{
		if (Lista[i].getActivaMostrar())
		{
			Lista[i].mostrarLista();
		}
	}

}
void ListaHash::agregar(string a)
{
	int var = funcion(a);

	Lista[var].insertarEnSuLugar(a);
	
	Lista[var].activaMostrar();
}
void ListaHash::eliminar(string palabra)
{
	int var = funcion(palabra);
	Casilla* aux=	Lista[var].buscarNoRecursivo(palabra);
	delete aux;
}
int ListaHash::funcion(string a)
{	
	int aux=0;
	for (int i = 0; i < a.length(); i++)
	{
		aux = a[i];
		aux = aux * 2;
		aux = aux + (pow(aux, i));
	}
	return  aux % TAM;
}
void ListaHash::buscar(string palabra )
{
	int var = funcion(palabra);
	Casilla* aux;
	aux = Lista[var].buscarNoRecursivo(palabra);
	aux->mostrar();
}
void ListaHash::activarMostrar()
{
	activa = true;
}
bool ListaHash::getActivarDeMostrar()
{
	return activa;
}