#include "libro.h"
#include <iostream>

Libro::Libro()
{}

Libro::Libro(int codigo,string titulo,string autor,int paginas) : Material(codigo,titulo,autor)
{
	this->paginas = paginas;
}

Libro::~Libro()
{}

void Libro::mostrar() const
{
	Material::mostrar();
	cout << "Cantidad de Paginas: " << this -> getPaginas() << endl;
}
