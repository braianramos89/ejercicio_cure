#ifndef DISCO_H
#define DISCO_H
#include "material.h"

class Disco : public Material
{
	private:
		string discografica;
	
	public:
		Disco();
		Disco(int,string,string,string);
		~Disco();
		
		void setDiscografica(const string);
		string getDiscografica() const;
		
		void mostrar() const;
};

inline void Disco::setDiscografica(const string discografica)
{
	this->discografica = discografica;
}

inline string Disco::getDiscografica() const
{
	return this->discografica;
}

#endif
