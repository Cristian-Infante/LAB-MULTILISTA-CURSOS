#ifndef MULTILISTA_H
#define MULTILISTA_H
#include "CURSO.h"

template <class T>
class MULTILISTA{
    private:
        CURSO<T> *head;
    public:
        MULTILISTA();
        virtual ~MULTILISTA();
        void setHead(CURSO<T> *);
        CURSO<T> *getHead();
        bool isEmpty();
        void pushCourse(T);
        T popCourse(T);
        void pushEs(T);
        T popEs(T);
        void pushEst(T, T);
        T popEst(T, T);
        void print();
        void mostrar(CURSO<T> *);
        bool buscar(CURSO<T> *, CURSO<T> *);

};

#endif // MULTILISTA_H
