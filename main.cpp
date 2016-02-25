#include <iostream>
#include <string>

#include "nodo_t.hpp"
#include "lista_t.hpp"
#include "cola.hpp"

#include "pila.hpp"
	using namespace std;
	int main(){
	    
	    AEDA::pila pila;

	    pila.push(1);
	    pila.push(2);
	    pila.push(3);
	    pila.push(4);
	    pila.push(5);
	    pila.insertar_ramdom(0,2);
	
		int a;
		a = pila.get_size();
		cout<< "tamaño : "<< a<<endl;
		
	    pila.write(cout);

// metodo de insertar en el medio  y metodo get_size()

	    




	}