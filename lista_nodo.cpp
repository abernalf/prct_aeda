#include "lista_nodo.hpp"

#include <iostream>

using namespace std;

namespace AEDA {
    
        lista_nodo::lista_nodo(TDATO c):
        nodo_t(),
        c_(c) {}
        
        lista_nodo::~lista_nodo(void)
        {}

        TDATO lista_nodo::get_dato(){
            return c_;
        }

        ostream& lista_nodo::write(ostream& os) const
        {
            os << c_;
            return os;
        }
    
}