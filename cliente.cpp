#include "cliente.h"
#include <iostream>


Cliente::Cliente()
{}

Cliente::Cliente(int dni,string nombre)
{
	this -> dni = dni;
	this -> nombre = nombre;
	this -> cantPeticiones = 0;
	int i;
/*	for(i=0;i<5;i++)
	{
		this->peticiones[i].setFechaInicio("0");
		this->peticiones[i].setFechaFin("0");
		this->peticiones[i].setMaterial(Material());
	}*/
}

Cliente::~Cliente()
{}

bool Cliente::validarPeticiones()
{
	if(this->getCantPeticiones() < 5)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void Cliente::ingresarPeticion( Peticion peticion)
{
	if(this->validarPeticiones())
	{
		this->peticiones[this->getCantPeticiones()] = peticion;
		this->cantPeticiones++; 
	}
	
}

void Cliente::mostrar() const
{
	cout << "DNI: " << this->getDni() << endl;
	cout << "Nombre: " << this->getNombre() << endl;
	cout << "Cantidad de Pedidos: " << this->getCantPeticiones();
	cout << "\n Pedidos:" << endl;
	int i;
	for(i=0;i<this->getCantPeticiones();i++)
	{
		cout<< i+1 << "\n "<< endl;
		this->peticiones[i].mostrar();
		cout << "\n" << endl;
	}


}

Peticion Cliente::getPeticiones() const {
    return Peticion();
}
