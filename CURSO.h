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
        void pushEst(T);
        T popEst(T);
        void printEst();
        void print();
};

#endif // CURSO_H
