#ifndef PETICION_H
#define PETICION_H
#include "material.h"

using namespace std;

class Peticion
{
	private:
		string fechaInicio;
		string fechaFin;
		Material material;
	
	public:
		Peticion();
		Peticion(string,string,Material);
		~Peticion();
		
		void setFechaInicio(const string);
		void setFechaFin(const string);
		void setMaterial(Material);
		string getFechaInicio() const;
		string getFechaFin() const;
		Material getMaterial() ;
		
		void mostrar() const;
};

inline void Peticion::setFechaInicio(const string fechaInicio)
{
	this ->fechaInicio = fechaInicio;
}

inline void Peticion::setFechaFin(const string fechaFin)
{
	this -> fechaFin = fechaFin;
}

inline void Peticion::setMaterial( Material material)
{
	this->material = material;
}

inline string Peticion::getFechaInicio() const
{
	return this->fechaInicio;
}

inline string Peticion::getFechaFin() const
{
	return this->fechaFin;
}

inline Material Peticion::getMaterial()
{
	return this->material;
}

#endif
