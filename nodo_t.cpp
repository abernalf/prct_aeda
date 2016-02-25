#include "nodo_t.hpp"
#include <iostream>
#include <cstdio>

using namespace std;

namespace AEDA {

   nodo_t::nodo_t() :
	next_(NULL)
	
    {}

    nodo_t::~nodo_t(void) {}

	void nodo_t::set_next(nodo_t* next)
	{
		next_ = next;

	}

	nodo_t* nodo_t::get_next(void) const
	{
		return next_;
	}

	void nodo_t::set_prev(nodo_t* prev){
		prev_ = prev;
	}

	nodo_t* nodo_t::get_prev() const{
		return prev_;
	}

}