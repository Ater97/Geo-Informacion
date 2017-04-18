#pragma once
#include "Pais.h"

class Nodo
{
public:
	Pais *miPais;
	char *lan;
	Nodo *siguiente;
	Nodo *anterior;
public:
	Nodo(Pais *miPais);
	Nodo(char *lan);
	~Nodo();
};