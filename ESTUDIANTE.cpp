#include "ESTUDIANTE.h"

template <typename T>
ESTUDIANTE<T>::ESTUDIANTE(T nombre){
    EstName = nombre;
    siguiente = nullptr;
}

template <typename>
ESTUDIANTE<T>::~ESTUDIANTE(){
    EstName = nullptr;
    siguiente = nullptr;
}

template <typename T>
void ESTUDIANTE<T>::setEst(T nombre){
    EstName = nombre;
}

template <typename T>
T ESTUDIANTE<T>::getEst(){
    return EstName;
}

template <typename T>
void ESTUDIANTE<T>::setSig(ESTUDIANTE<T> *next){
     siguiente = next;
}

template <typename T>
ESTUDIANTE<T> *ESTUDIANTE<T>::getSig(){
    return siguiente;
}

template <typename T>
void ESTUDIANTE<T>::print(){
    cout<<EstName<<endl;
}
