#ifndef CURSO_H
#define CURSO_H
#include "ESTUDIANTE.h"

template <class T>
class CURSO{
    private:
        T courseName;
        CURSO<T> *siguiente;
        ESTUDIANTE<T> *inicio;
    public:
        CURSO(T);
        virtual ~CURSO();
        bool isEmpty();
        void setCourse(T);
        T getCourse();
        void setSiguiente(CURSO<T> *);
        CURSO<T> *getSiguiente();
        void setInicio(ESTUDIANTE<T> *);
        ESTUDIANTE<T> *getInicio();
        void pushEstu(T);
        void insertar(ESTUDIANTE<T> *, ESTUDIANTE<T> *, ESTUDIANTE<T> *);
        T popEst(T);
        void print();
        void mostrar(ESTUDIANTE<T> *);
        void queHago(ESTUDIANTE<T> *);
};

#endif // CURSO_H
