#pragma once
class Pais
{
public:
	char* nombre;
	char* codigo;
	int poblacion;
	double isoNumeric;
	char *isoAlpha3;
	char*fipsCode;
	char*continent;
	char*continentName;
	char*capital;
	double areaInSqKm;
	char*currencyCode;
	char*languages;
	double geonameId;
	double west;
	double north;
	double east;
	double south;
	char*postalCodeFormat;
	int N;
public:
	Pais(char* nombre, char* codigo, int poblacion, double isoNumeric, char* isoAlpha3, char*fipsCode, char*continent, char*continentName, char* capital, double areaInSqKm, char* currencyCode, char* languajes, double geonameId, double west, double north, double east, double south, char* postalCodeFormat, int N);
	~Pais();
};