#include "CURSO.h"

template <typename T>
CURSO<T>::CURSO(T course){
    courseName = course;
    siguiente = nullptr;
    inicio = nullptr;
}

template <typename T>
CURSO<T>::~CURSO(){
    while(inicio->getSig() != nullptr){
        ESTUDIANTE<T> *aux = inicio;
        inicio = inicio->getSig();
        aux->~ESTUDIANTE();
    }
    inicio = nullptr;
    courseName = 0;
    siguiente = nullptr;
}

template <typename T>
void CURSO<T>::setCourse(T curso){
    courseName = curso;
}

template <typename T>
bool CURSO<T>::isEmpty(){
    if(inicio == nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
T CURSO<T>::getCourse(){
    return courseName;
}

template <typename T>
void CURSO<T>::setSiguiente(CURSO<T> *next){
    siguiente = next;
}

template <typename T>
CURSO<T> *CURSO<T>::getSiguiente(){
     return siguiente;
}

template <typename T>
void CURSO<T>::setInicio(ESTUDIANTE<T> *start){
    inicio = start;
}

template <typename T>
ESTUDIANTE<T> *CURSO<T>::getInicio(){
    return inicio;
}

template <typename T>
void CURSO<T>::pushEstu(T est){
    ESTUDIANTE<T> *nuevo = new ESTUDIANTE<T>(est);
    if(isEmpty()){
        inicio = nuevo;
    }
    else{
        ESTUDIANTE<T> *act = inicio;
        ESTUDIANTE<T> *ant = nullptr;
        while((act->getSig() != nullptr) && (act->getEst() < est)){
            ant = act;
            act = act->getSig();
        }
        if(act->getEst() != est){
            if(act == nullptr){
                ant->setSig(nuevo);
            }
            else{
                if(ant == nullptr){
                    nuevo->setSig(inicio);
                    inicio = nuevo;
                }
                else{
                    nuevo->setSig(act);
                    ant->setSig(nuevo);
                }
            }
        }
    }
}

template <typename T>
void CURSO<T>::insertar(ESTUDIANTE<T> *est, ESTUDIANTE<T> *aux, ESTUDIANTE<T> *ant){
    if(isEmpty()){
        inicio = est;
    }
    else{
        if((aux->getSig() != nullptr) && (aux->getEst() < est->getEst())){
            ant = aux;
            insertar(est,aux->getSig(),ant);
        }
        else{
            if(aux->getEst() != est->getEst()){
                if(aux == nullptr){
                    ant->setSig(est);
                }
                else{
                    if(ant == nullptr){
                        est->setSig(inicio);
                        inicio = est;
                    }
                    else{
                        est->setSig(aux);
                        ant->setSig(est);
                    }
                }
            }
        }
    }
}

template <typename T>
T CURSO<T>::popEst(T est){
    if(isEmpty()){
        //cout<"Is empty"<<endl;
    }
    else{
        ESTUDIANTE<T> *act = inicio;
        ESTUDIANTE<T> *ant = nullptr;
        while((act->getSig() != nullptr) && (act->getEst() < est)){
            ant = act;
            act = act->getSig();
        }
        if(act->getEst() == est){
            if(ant == nullptr){
                inicio = inicio->getSig();
                return act;
            }
            else{
                ant->setSig(act->getSig());
                return act;
            }
        }
        else{
            //cout<<"No existe"<<endl;
        }
    }
}

template <typename T>
void CURSO<T>::print(){
    ESTUDIANTE<T> *act = inicio;
    while(act->getSig() != nullptr){
        cout<<act->getEst()<<" ";
        act = act->getSig();
    }
}

template <typename T>
void CURSO<T>::mostrar(ESTUDIANTE<T> *aux){
    if(aux != nullptr){
        aux->print();
        mostrar(aux->getSig());
    }
}

template <typename T>
void CURSO<T>::queHago(ESTUDIANTE<T> *aux){
    if(aux != nullptr){
        if(aux->getEst() >= 1){
            if(aux->getEst() % 3 != 0){
                cout<<aux->getEst()<<" ";
                queHago(aux->getSig());
            }
            else if(aux != nullptr){
                queHago(aux->getSig());
                cout<<aux->getEst()<<" ";
            }
        }
    }
}
