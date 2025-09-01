#include <iostream>
using namespace std;
void cargarVector (int vec[], int tam);
void mostrarVector (int vec[], int tam);


int main(){
    const int TAM = 5; //sino da error en el vector, tiene que ser const si o si
    int vec[12], vect[TAM] ,cant; //primer elemento 0 y el ultimo 11
    //cout<<sizeof cant<<endl; //sizeof es un contandor de espacios en memoria
    //cout<<sizeof vec<<endl;

    ///LAMADA A LA FUNCION
    cargarVector(vec, 5);
    mostrarVector(vec, 5);
    cout<<endl;


    system("pause");
    return 0;
}

void cargarVector (int vec[], int tam){
    int i;
    for(i=0;i<tam;i++){
        vec[i]= i + 1;
    }

}

void mostrarVector (int vec[], int tam){
    int i;
    for(i=0;i<tam;i++){
            cout<<vec[i]<<endl;
    }

}
