#include <iostream>
using namespace std;

void mostrarOrdenado(int vec[], int tamanio){
    int i;
    for(i=0; i<tamanio; i++){
        cout<<vec[i]<<" ";
    }
    cout << endl;
}
void mostrar(int vec[], int tamanio){
    int i,j,minPosicion;
    for (i=0; i <tamanio -1; i++){
        minPosicion = i;
        for(j= j + 1; j<tamanio; j ++){
            if ( vec[j]<vec[minPosicion]){
                minPosicion = j;
            }
        }
    int aux;
    aux = vec[i];
    vec[i]= vec[minPosicion];
    vec[minPosicion] = aux;
    }
}


int main(){

    int vec[6]={10,50,6,-3,88,14};

    mostrarOrdenado(vec,6); //-3 ,6 ,10 ,14 ,50 ,88
    mostar(vec,6);//10, 50, 3, -3, 88, 14

     return 0;
}
