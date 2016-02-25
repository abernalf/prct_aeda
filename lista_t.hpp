#pragma once
#include "nodo_t.hpp"
#include <iostream>
using namespace std;



namespace AEDA {

    class lista_t {
    private:
        nodo_t* beginning_;
        nodo_t* end_;

    public:
        lista_t(void);
        virtual ~lista_t(void);

        void insert_beginning(nodo_t* n);
        nodo_t* extract_beginning(void);

	    void insert_end(nodo_t* n);
	    nodo_t* extract_end();

        bool empty(void) const;	
	    ostream&  write(ostream& os) const;
    };
    
}