#ifndef LIBRO_H
#define LIBRO_H

#include "material.h"

class Libro : public Material
{
	private:
		int paginas;
		
	public:
		Libro();
		Libro(int,string,string,int);
		~Libro();
		
		void setPaginas(const int);
		int getPaginas() const;
		
		void mostrar() const;
};

inline void Libro::setPaginas(const int paginas)
{
	this->paginas = paginas;
}

inline int Libro::getPaginas() const
{
	return this->paginas;
}

#endif
