#include <iostream>
using namespace std;

int main(){

    ///CONSIGNA:
    /*** UN LOCAL REALIZA VENTAS DURANTE TODO EL AÑO
    POR CADA AÑO
    datos a ingresar: numeroVenta, dia, mes, monto
    el fin de la craga de datos se hace con un numero de venta igual a 0
    se pide mostrar para cada dia y mes, la recaudacion
    */


    int numeroVenta, dia, mes;
    float monto;

    bool huboVentasMes[12]={};
    float recaudacionDiaria[12][31]={}; //12 meses, 31 dias - acumulador

    cout<<"ingrese numero de venta: ";
    cin>>numeroVenta;

    while(numeroVenta != 0){
        cout <<"ingrese mes: ";
        cin >> mes,
        cout <<"ingrese dia: ";
        cin >> dia,
        cout <<"ingrese monto: ";
        cin >> monto,

        recaudacionDiaria[mes-1][dia-1] += monto;
        huboVentasMes[mes-1] = true;
        cout<<"ingrese numero de venta: ";
        cin>>numeroVenta;
    }
    for(int mes=0; mes<12; mes ++)
        {
            if(huboVentasMes[mes]==true){
                cout<<"mes:"<< mes + 1 <<endl;
                for(int dia=0; dia<31; dia++){
                    if(recaudacionDiaria[mes][dia]!=0){
                        cout<<"dia #"<< dia+1<<": $"<<recaudacionDiaria[mes][dia]<<endl;
                    }
            }
        cout<<endl;
        }
    }


     return 0;
}
