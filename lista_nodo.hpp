#pragma once

#include <iostream>
using namespace std;


#include "nodo_t.hpp"

namespace AEDA {

    class lista_nodo: public nodo_t {
    private:
        TDATO c_;

    public:
        lista_nodo(TDATO c);
        virtual ~lista_nodo(void);

        TDATO get_dato();

        virtual ostream& write(ostream& os) const;
    };    
    
}