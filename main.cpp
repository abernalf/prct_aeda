#include <iostream>
#include <string>

#include "nodo_t.hpp"
#include "lista_t.hpp"
#include "cola.hpp"

#include "pila.hpp"
	using namespace std;
	int main(){
	    
	    AEDA::cola cola;

	    cola.push('H');
	    cola.push('A');
	    cola.pop();
	    cola.push('O');
	    cola.push('L');
	    cola.push('A');

	    cola.write(cout);

	    




	}