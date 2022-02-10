#include "MULTILISTA.cpp"
#include "CURSO.cpp"
#include "ESTUDIANTE.cpp"

double raiz(double valor, double x, double n){
    if(n == x){
        return (x);
    }
    else{
        n = x;
        x = (valor / x + x) / 2;
        return(raiz(valor,x,n));
    }
}

int main(){
    /*CURSO<int> *nuevo = new CURSO<int>(20);
    for(int i=0; i<=10; i++){
        ESTUDIANTE<int> *est = new ESTUDIANTE<int>(i);
        ESTUDIANTE<int> *act = nuevo->getInicio();
        ESTUDIANTE<int> *ant = NULL;
        nuevo->insertar(est,act,ant);
        //nuevo->pushEstu(i);
    }
    nuevo->mostrar(nuevo->getInicio());
    nuevo->queHago(nuevo->getInicio());*/

    /*bool m = true;
    do{
        int n;
        cout<<"Que numero desea calcular: ";
        cin>>n;
        cout<<endl<<raiz(n,n,0)<<endl;
    }while(m);*/

    MULTILISTA<int> *MULTI = new MULTILISTA<int>();
    MULTI->pushCourse(1);
    MULTI->pushCourse(2);
    MULTI->pushCourse(3);
    MULTI->pushEs(4);
    MULTI->pushEs(5);
    MULTI->pushEs(6);
    //MULTI->print();
    MULTI->mostrar(MULTI->getHead());
}
