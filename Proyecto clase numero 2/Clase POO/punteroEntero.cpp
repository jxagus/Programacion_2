#include <iostream>
using namespace std;

int main(){
    int *vec = nullptr;
    int cantidad;

    cout <<"cantidad de elemntos del vector: ";
    cin  >> cantidad;

    vec = new int[cantidad]{};

    for(int i=0; i<cantidad; i++){
       cout<< vec[i] <<"";
    }
    delete []vec;
    vec =nullptr;

     return 0;
}
