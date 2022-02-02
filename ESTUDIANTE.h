#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

template <class T>
class ESTUDIANTE{
    private:
        T EstName;
        ESTUDIANTE<T> siguiente;
    public:
        ESTUDIANTE(T);
        virtual ~ESTUDIANTE();
        void setEst(T);
        T getEst();
        void setSig(ESTUDIANTE<T> *);
        ESTUDIANTE<T> *getSig();
        void print(T);
};

#endif // ESTUDIANTE_H
