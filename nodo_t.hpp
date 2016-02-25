
#pragma once

#include <iostream>
using namespace std;
typedef char TDATO;

namespace AEDA {

    class nodo_t {
    private:
        nodo_t* next_;
        nodo_t* prev_;
        
    public:
        nodo_t(void);
        virtual ~nodo_t(void);

	    void set_next(nodo_t* next);
	    nodo_t* get_next(void) const;

        void set_prev(nodo_t* prev);
        nodo_t* get_prev() const;

        virtual ostream& write(ostream& os) const = 0;
        virtual TDATO get_dato(void) = 0;
    };

}