#include "stdafx.h"
#include "Pais.h"


Pais::Pais(char* nombre, char* codigo, int poblacion, double isoNumeric, char* isoAlpha3, char*fipsCode, char*continent, char*continentName, char* capital, double areaInSqKm, char* currencyCode, char* languajes, double geonameId, double west, double north, double east, double south, char* postalCodeFormat, int N)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->poblacion = poblacion;
	this->isoNumeric = isoNumeric;
	this->isoAlpha3 = isoAlpha3;
	this->fipsCode = fipsCode;
	this->continent = continent;
	this->continentName = continentName;
	this->capital = capital;
	this->areaInSqKm = areaInSqKm;
	this->currencyCode = currencyCode;
	this->languages = languajes;
	this->geonameId = geonameId;
	this->west = west;
	this->north = north;
	this->south = south;
	this->postalCodeFormat = postalCodeFormat;
	this->N = N;
}

Pais::~Pais()
{
}
