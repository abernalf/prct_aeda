#include <iostream>
using namespace std;
    typedef double TDATO;


class vector_t{

	//define diciendo que TDATO es entero
	

private:
	TDATO* base_;//vector , hay que ponerlo como puntero apuntado a base
	int sz_;//tamao del vector
public:
	vector_t();
	vector_t(int sz_);
	virtual ~vector_t();
	void resize(int sz_);//vector de redimensio 
	TDATO& operator[](int pos);//caso de elemento no constante por eso retornamos elemento a tipo de dato 
	TDATO operator[](int pos)const;//Esta funcion solo funciona para objetos constantes
	int get_size();
private:
	void build(int sz_);//metodos privados para el constructor
	void clean();//metodos privados para el destructor


};