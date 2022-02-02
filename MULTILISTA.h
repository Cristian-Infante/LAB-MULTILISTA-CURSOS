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
        void pushCourse(T);
        T popCourse(T);
};

#endif // MULTILISTA_H
