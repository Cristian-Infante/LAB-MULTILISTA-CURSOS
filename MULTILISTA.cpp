#include "MULTILISTA.h"

MULTILISTA::MULTILISTA(){
    head = nullptr;
}

MULTILISTA::~MULTILISTA(){
    while(head->getSiguiente() != nullptr){
        CURSO<T> *aux = head;
        head = head->getSiguiente();
        aux->~CURSO();
    }
    head = nullptr;
    courseName = nullptr;
    siguiente = nullptr;
}
