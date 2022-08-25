#include "peticion.h"

#include <iostream>

Peticion::Peticion()
{}

Peticion::Peticion(string fechaInicio,string fechaFin,Material material)
{
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->material = material;
}

Peticion::~Peticion()
{}

void Peticion::mostrar() const
{
	cout << "Fecha de retiro: " << this -> getFechaInicio() << endl;
	cout << "Fecha de devolucion: " << this->getFechaFin() << endl;
	cout << "Material pedido: " << endl;
	this->material.mostrar();
}
