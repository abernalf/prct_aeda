#pragma once

#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>

#include "lista_t.hpp"


namespace AEDA {

	class pila{
	private:
		lista_t list_;

	public:
		pila();
		virtual ~pila();
		void push(TDATO c);
		nodo_t* pop();

		bool empty();

		ostream& write(ostream& os);

	};
}