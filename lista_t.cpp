#include "lista_t.hpp"


#include <iostream>
#include <cstdio>

using namespace std;

namespace AEDA {

    lista_t::lista_t(void) :
    beginning_(NULL),
    end_(NULL){}

    lista_t::~lista_t(void) {

        while (beginning_ != NULL) {
            
            nodo_t* aux = beginning_;
            beginning_ = beginning_->get_next();
            delete aux;
        }
    }
    
    bool lista_t::empty(void) const {
        return (beginning_ == NULL);
    }


    void lista_t::insert_beginning(nodo_t* n)
    {
        n->set_next(beginning_);
        n->set_prev(NULL);
        
        if(end_ == NULL)
            end_ = n;
        else
            beginning_->set_prev(n);
            
        beginning_ = n;
    }

    nodo_t* lista_t::extract_beginning(void) {

        nodo_t* aux = beginning_;
        beginning_ = beginning_->get_next();
        
        aux->set_next(NULL);
        aux->set_prev(NULL);
        
        if (beginning_ == NULL)
            end_ = NULL;

        return aux;
    }

    void lista_t::insert_end(nodo_t* n)
    {
        n->set_prev(end_);
        n->set_next(NULL);
        
        if (end_ != NULL)
            end_->set_next(n);
        else
            beginning_ = n;
            
         end_ = n;
    }

    nodo_t* lista_t::extract_end(void) {

        nodo_t* aux = end_;
        
        end_ = end_->get_prev();
        
        aux->set_next(NULL);
        aux->set_prev(NULL);
        
        if (end_ == NULL)
            beginning_ = NULL;
        else
            end_->set_next(NULL);

        return aux;
    } 


    ostream& lista_t::write(ostream& os) const {
        
        nodo_t* aux = beginning_;

        while (aux != NULL) {

            //cout << ""<<endl;
            aux->write(os);
            aux = aux->get_next();
            cout << endl;
        }

        return os;
    }
    
    int lista_t::get_size(){
        int contador;
        
        nodo_t* aux = beginning_;

        while (aux != NULL) {

            //cout << ""<<endl;
            
            aux = aux->get_next();
            contador++;
            
        }
        
        return contador;
        
    }
    
    void lista_t::insertar_ramdom(nodo_t* n,int pos){
        
        nodo_t* actual = beginning_;
        nodo_t* aux = beginning_->get_next();
        
        for(int i=0; i <= pos; i++){
            actual = actual->get_next();
            aux = aux->get_next();
            
        }
        aux->insertar_intermedio(n,actual,aux);
        
    }

}