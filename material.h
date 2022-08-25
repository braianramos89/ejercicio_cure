#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>

using namespace std;

class Material
{
	private:
		int codigo;
		string titulo;
		string autor;
		
	public:
		Material();
		Material(int,string,string);
		~Material();
		
		void setCodigo(const int);
		void setTitulo(const string);
		void setAutor(const string);
		
		int getCodigo() const;
		string getTitulo() const;
		string getAutor() const;
		
		virtual void mostrar() const;
	
};

inline void Material::setCodigo(const int codigo)
{
	this -> codigo = codigo;
}

inline void Material::setTitulo(const string titulo)
{
	this->titulo = titulo;
}

inline void Material::setAutor(const string autor)
{
	this->autor = autor;
}

inline int Material::getCodigo() const
{
	return this->codigo;
}

inline string Material::getTitulo() const
{
	return this->titulo;
}

inline string Material::getAutor() const
{ 
	return this->autor;
}


#endif
