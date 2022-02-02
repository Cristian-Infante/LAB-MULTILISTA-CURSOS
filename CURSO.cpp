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
    courseName = nullptr;
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
void CURSO<T>::pushEst(T est){
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
            else
        }
    }
}



