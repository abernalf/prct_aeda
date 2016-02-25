
#include "vector_t.hpp"


	void vector_t::build(int sz){
		
			
			base_= new TDATO[sz];
			sz_=sz;
		

	

	}

	void vector_t::clean(){
			
			delete[] base_;
			cout << "Se ha borrado el vector"<<endl;
			sz_ = 0;
		
	}

	//contructor por defecto

	vector_t::vector_t():
			sz_(0){}

	//constructor normal

	vector_t::vector_t(int sz):
		sz_(0)
		{
			build(sz);
		}

	vector_t::~vector_t(){
		clean();
	}

	void vector_t::resize(int sz){
		clean();

		if (sz > 0){
			build(sz);//si no ponemos el if, nos dará error 
		}
	}

	TDATO& vector_t::operator[](int pos){ //Solo invocable por una variable normal a la cual se le pueda modificar el contenido, 
										  //al no ser constante, debemos devolver referencia
		return base_[pos];
	}

	TDATO vector_t::operator[](int pos) const{ // pues con costantes 
		return base_[pos];
	}

	int vector_t::get_size(){
		return sz_;
	}