#include <iostream>
using namespace std;

void pedirNumeroPositivo();
void pedirNumeroEntre();
void asignarValor (int *v,  int num, int tam=10);
void mostrarVector (int *v, int tam=10);
int *pedirMemoria();
int main(){

    const int tam = 1000;
    int *pVec = nullptr; ///puntero, nullpointer es un 0 en puntero
    pVec = new int[tam]; ///pedimos memoria para el puntero


    delete[]pVec; ///devolvemos la direccion de memoria y no la usamos mas


     return 0;
}













int *pedirMemoria(int &tam){
    //pido memoria
    int *p = nullptr;
    cout<<"ingrese la cantidad de elementos"<<endl;
    cin >>tam;
    if(tam<=0){
        cout<<"el valor ingresado no es valido";
        return nullptr;
    }
    p = new int[tam];
    return p;
}


void asignarValor(int *v, int num, int tam){
    for(int i=0; i<tam; i++){
        v[i]=num;
    }
}
void mostrarVector(int *v, int tam){
    for(int i=0;i<tam;i++){
        cout<<v[i]<<endl;
    }
}
void pedirNumeroPositivo(){
    int num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    (num>=0) ? cout<<"numero positivo" : cout<<"numero positivo";

}
void pedirNumeroEntre(){
    int inicio, fin;
    cout<<"ingrese numero de inicio:"<<endl;
    cin>>inicio;
    cout<<"ingrese numero de fin:"<<endl;
    cin>>fin;
}
