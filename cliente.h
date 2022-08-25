#ifndef CLIENTE_H
#define CLIENTE_H
#include<string>
#include"peticion.h"


using namespace std;

class Cliente
{
	private:
		int dni;
		string nombre;
		int cantPeticiones;
		Peticion peticiones[5];
		
		bool validarPeticiones();
	
	public:
		Cliente();
		Cliente(int,string);
		~Cliente();
		
		void setDni(const int);
		void setNombre(const string);
		int getDni() const;
		string getNombre() const;
		int getCantPeticiones() const;
		Peticion getPeticiones() const;
		
		void ingresarPeticion(Peticion);
		void mostrar() const;	
};

inline void Cliente::setDni(const int dni)
{
	this -> dni = dni;
}

inline void Cliente::setNombre(const string nombre)
{ 
	this->nombre = nombre;
}

inline int Cliente::getDni() const
{
	return this->dni;
}

inline string Cliente::getNombre() const
{
	return this->nombre;
}

inline int Cliente::getCantPeticiones() const
{
	return this->cantPeticiones;

}




#endif
