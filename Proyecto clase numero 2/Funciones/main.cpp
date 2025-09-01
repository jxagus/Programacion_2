#include <iostream>
#include "funciones.h"

using namespace std;

void mostrar(int n){
    cout<<n <<endl;
}
void mostrarR(int&n){ ///creo referencia
    cout<<n <<endl;
}
void mostrarD(int *n){ ///poner & para pasar direccion de memoria(puntero)
    cout<<*n<<endl; //voy a ir al lugar donde apunta esta variable(indireccion)
}
///SOBRE CARGA DE FUNCIONES (sumar)
int sumar(int n, int m){
    return n + m;
}
float sumar(float n , float m){
return n + m;
}
int sumar (int n, int f, int g = 0){
return n +f+g;}
void espaciado(){
    cout<<endl;
}
int main()
{
    ///VECTOR
     int vec[12]{1,2,3,4,5,6,7,8,9,45,12,15};

    for(int i=0;i<12; i++){
        cout<<vec[i]<<endl;
    }
    espaciado();
    ///MATRICES
    int mat[5][2]{};
    for(int f=0; f<5;f++){
        for(int c=0; c<2; c++){
            cout<<mat[f][c];
        }
    espaciado();
    }

    /*cout <<"la suma es:" << sumar(2 , 5) << endl;
    cout <<"la suma es:" << sumar(2.5f , 5.5f) << endl; // 2.5f es flotante, sino es double
    cout <<"la suma es:" << sumar(2, 5 , 5) << endl; */

    //linea(40, '*');
    //int par= 16;
    //mostrarD( &par); //pido la memoria
    //int legajo = pedirNumero("Ingrese Legajo: ");
    //int numero = pedirNumero();
    //int edad = pedirNumero("Ingrese edad:");
    //linea(40, '-');

    //cout<<"El legajo es: "<<legajo<<endl;
    return 0;
}
