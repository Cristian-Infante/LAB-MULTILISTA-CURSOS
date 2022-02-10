#include "MULTILISTA.h"

template <typename T>
MULTILISTA<T>::MULTILISTA(){
    head = nullptr;
}

template <typename T>
MULTILISTA<T>::~MULTILISTA(){
    while(head->getSiguiente() != nullptr){
        CURSO<T> *aux = head;
        head = head->getSiguiente();
        aux->~CURSO();
    }
    head = nullptr;
}

template <typename T>
void MULTILISTA<T>::setHead(CURSO<T> *nHead){
    head =  nHead;
}

template <typename T>
CURSO<T> *MULTILISTA<T>::getHead(){
    return head;
}

template <typename T>
bool MULTILISTA<T>::isEmpty(){
    if(head == nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
void MULTILISTA<T>::pushCourse(T course){
    CURSO<T> *nuevo = new CURSO<T>(course);
    if(isEmpty()){
        head = nuevo;
    }
    else{
        CURSO<T> *act = head;
        CURSO<T> *ant = nullptr;
        while((act->getSiguiente() != nullptr) && (act->getCourse() < course)){
            ant = act;
            act = act->getSiguiente();
        }
        if(act->getCourse() != course){
            if(act == nullptr){
                ant->setSiguiente(nuevo);
            }
            else{
                if(ant == nullptr){
                    nuevo->setSiguiente(head);
                    head = nuevo;
                }
                else{
                    nuevo->setSiguiente(act);
                    ant->setSiguiente(nuevo);
                }
            }
        }
    }
}

template <typename T>
T MULTILISTA<T>::popCourse(T course){
    if(isEmpty()){
        //cout<"Is empty"<<endl;
    }
    else{
        CURSO<T> *act = head;
        CURSO<T> *ant = nullptr;
        while((act->getSiguiente() != nullptr) && (act->getEst() < course)){
            ant = act;
            act = act->getSiguiente();
        }
        if(act->getEst() == course){
            if(ant == nullptr){
                head = head->getSiguiente();
                return act;
            }
            else{
                ant->setSig(act->getSiguiente());
                return act;
            }
        }
        else{
            //cout<<"No existe"<<endl;
        } 
    }
}

template <typename T>
void MULTILISTA<T>::pushEs(T est){
    if(isEmpty()){
        //cout<"Is empty"<<endl;
    }
    else{
        CURSO<T> *act = head;
        while(act != nullptr){
            act->pushEstu(est);
            act = act->getSiguiente();
        }
    }
}

template <typename T>
T MULTILISTA<T>::popEs(T est){
    if(isEmpty()){
        //cout<"Is empty"<<endl;
    }
    else{
        CURSO<T> *act = head;
        while(act->getSiguiente() != nullptr){
            act->popEstu(est);
            act = act->getSiguiente();
        }
    }
}

template <typename T>
void MULTILISTA<T>::print(){
    CURSO<T> *act = head;
    while(act != nullptr){
        cout<<act->getCourse()<<" ";
        act = act->getSiguiente();
    }
}

template <typename T>
void MULTILISTA<T>::mostrar(CURSO<T> *aux){
    if(aux != nullptr){
        cout<<endl<<aux->getCourse()<<endl;
        aux->mostrar(aux->getInicio());
        mostrar(aux->getSiguiente());
    }
}

template <typename T>
bool MULTILISTA<T>::buscar(CURSO<T> *course, CURSO<T> *aux){
    if(isEmpty()){
        return false;
    }
    else{
        if((aux->getSiguiente() != nullptr) && (aux->getEst() != course->getEst())){
            buscar(course,aux->getSiguiente());
        }
        else{
            if(aux->getSiguiente() != nullptr){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
