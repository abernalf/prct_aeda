#include "pila.hpp"
#include "nodo_t.hpp"
#include "lista_t.hpp"
#include "lista_nodo.hpp"

namespace AEDA{
	pila::pila():
	list_(){}


	pila::~pila(){}


	void pila::push(TDATO c){

		cout << "Se inserta el dato "<<c<<endl; 
		
		list_.insert_beginning(new AEDA::lista_nodo(c));

		
	}


	nodo_t* pila::pop(){
		return list_.extract_beginning();
	}

	bool pila::empty(){

		return list_.empty();
	}


	ostream& pila::write(ostream& os){
		cout << "Imprimimos"<<endl;
		list_.write(os);
		return os;
	}
}