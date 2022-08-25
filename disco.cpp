#include "disco.h"
#include <iostream>

Disco::Disco()
{}

Disco::Disco(int codigo,string titulo,string autor,string discografica) : Material(codigo,titulo,autor)
{
	this->discografica = discografica;
}

Disco::~Disco()
{}

void Disco::mostrar() const
{
	Material::mostrar();
	cout << "Discografica: " << this->getDiscografica() << endl;
}
