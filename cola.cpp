#include "cola.hpp"
#include "nodo_t.hpp"
#include "lista_t.hpp"
#include "lista_nodo.hpp"

namespace AEDA{
	cola::cola():
	list_(){}


	cola::~cola(){}


	void cola::push(TDATO c){

		cout << "Se inserta el dato "<<c<<endl; 
		
		list_.insert_end(new AEDA::lista_nodo(c));

		
	}


	nodo_t* cola::pop(){

		cout << "Borrado de dato"<<endl; 
		return list_.extract_end();
	}

	bool cola::empty(){

		return list_.empty();
	}


	ostream& cola::write(ostream& os){
		cout<<"imprimimos"<<endl;
		list_.write(os);
		return os;
	}
}