#include <iostream>
#include "material.h"

Material::Material()
{}

Material::Material(int codigo,string titulo,string autor)
{ 
	this -> codigo = codigo;
	this -> titulo = titulo;
	this -> autor = autor;
}

Material::~Material()
{}

void Material::mostrar() const
{
	cout << "Codigo: " << this->getCodigo() << endl;
	cout << "Titulo: " << this->getTitulo() << endl;
	cout << "Autor: " << this->getAutor() << endl;
}
