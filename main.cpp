#include <iostream>
#include "material.h"
#include "disco.h"
#include "libro.h"
#include "cliente.h"
#include "peticion.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Material materiales1(123,"Libro","El principito");
	
//	materiales[0] = new Libro(34,"garompa","alex",100);
//	materiales[1] = new Disco(35,"otragarompa","ramon","cascabel");
	
	Cliente cliente1(33761,"Juan");
	
	Peticion peticion1("10Ene22","20Ene22",materiales1);
    //Peticion peticion2("10Ene22","20Ene22",materiales[1]);
	cliente1.ingresarPeticion(peticion1);
 //   cliente1.ingresarPeticion(peticion2);
    cliente1.mostrar();

	return 0;
}
