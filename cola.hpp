#pragma once

#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>

#include "lista_t.hpp"


namespace AEDA {

	class cola{
	private:
		lista_t list_;

	public:
		cola();
		virtual ~cola();
		void push(TDATO c);
		nodo_t* pop();

		bool empty();

		ostream& write(ostream& os);

	};
}