#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "string"
#include "iostream"
using namespace std;

template <class T>
class ESTUDIANTE{
    private:
        T EstName;
        ESTUDIANTE<T> *siguiente;
    public:
        ESTUDIANTE(T);
        virtual ~ESTUDIANTE();
        void setEst(T);
        T getEst();
        void setSig(ESTUDIANTE<T> *);
        ESTUDIANTE<T> *getSig();
        void print();
};

#endif // ESTUDIANTE_H
