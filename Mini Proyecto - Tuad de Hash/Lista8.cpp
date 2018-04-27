#include "Lista8.h"

Lista8::Lista8(void)
{
	primer = NULL;
	ultimo = NULL;
	activa = false;
}

Lista8::~Lista8(void)
{
	eliminarLista();
}

void Lista8::insertarFinal(string e)
{
	if (ultimo == NULL)
	{
		primer = new Casilla;
		ultimo = primer;
		primer->setElemento(e);
		primer->setAnterior(NULL);
		primer->setSiguiente(NULL);
	}
	else
	{
		Casilla* aux;
		aux = ultimo;
		ultimo = new Casilla;
		aux->setSiguiente(ultimo);
		ultimo->setAnterior(aux);
		ultimo->setElemento(e);
		ultimo->setSiguiente(NULL);
	}

}


void Lista8::insertarPrincipio(string e)
{
	if (primer == NULL)
	{
		primer = new Casilla;
		ultimo = primer;
		primer->setElemento(e);
		primer->setSiguiente(NULL);
		primer->setAnterior(NULL);
	}
	else
	{
		Casilla* aux;
		aux = primer;
		primer = new Casilla;
		aux->setAnterior(primer);
		primer->setAnterior(NULL);
		primer->setSiguiente(aux);
		primer->setElemento(e);
	}
}



void Lista8::mostrarLista()
{
	if (primer != NULL)
	{
		Casilla* aux = primer;
		while (aux->getSiguiente() != NULL)
		{
			aux->mostrar();
			aux = aux->getSiguiente();
		}
		aux->mostrar();
		cout << endl;
	}
}

void Lista8::eliminarUltimo()
{
	if (primer != NULL && ultimo != NULL)
	{
		if (primer == ultimo)
		{
			delete primer;
			primer = NULL;
			ultimo = NULL;
		}
		else
		{
			Casilla* aux;
			aux = ultimo->getAnterior();
			aux->setSiguiente(NULL);
			delete ultimo;
			ultimo = aux;

		}
	}
}

void Lista8::eliminarPrincipio()
{
	if (primer != NULL && ultimo != NULL)
	{
		if (primer == ultimo)
		{
			delete primer;
			primer = NULL;
			ultimo = NULL;
		}
		else
		{
			Casilla* aux;
			aux = primer->getSiguiente();
			aux->setAnterior(NULL);
			delete primer;
			primer = aux;

		}
	}
}

void Lista8::eliminarLista()
{
	while (primer != NULL && ultimo != NULL)
	{
		eliminarUltimo();
	}
}

Casilla* Lista8::buscarNoRecursivo(string e)
{
	Casilla* aux = primer;
	bool resp = false;
	if (primer != NULL)
	{
		
		while (aux->getSiguiente() != NULL && resp == false)
		{
			if (aux->getElemento() == e)
			{
				resp = true;
			}
			else
			{
				aux = aux->getSiguiente();
			}		
		}

		if (aux->getElemento() == e)
		{
			resp = true;
		}
	}
	if (resp==false)
	{
		return NULL;
	}
	else
	{
		return aux;
	}

}

Casilla* Lista8::getPrimer()
{
	return primer;
}
Casilla* Lista8::getUltimo()
{
	return ultimo;
}
void Lista8::activaMostrar()
{
	activa = true;
}
bool Lista8::getActivaMostrar()
{
	return activa;
}

void Lista8::insertarEnSuLugar(string e)
{
		if (primer == NULL)
		{
			insertarPrincipio(e);
		}
		else
		{
			if (e < primer->getElemento())
			{
				insertarPrincipio(e);
			}
			else
			{
				if (e > ultimo->getElemento())
				{
					insertarFinal(e);
				}
				else
				{
					Casilla* aux = primer;
					while (aux->getElemento() < e)
					{
						aux = aux->getSiguiente();
					}
					if (aux->getElemento() == e)
					{
						aux->addCant();
					}
					if (aux->getElemento() > e)
					{
						Casilla* izq = aux->getAnterior();
						Casilla* nueva = new Casilla;

						nueva->setElemento(e);
						nueva->setAnterior(izq);
						nueva->setSiguiente(aux);

						izq->setSiguiente(nueva);
						aux->setAnterior(nueva);
					}
				}
			}
		}
}
