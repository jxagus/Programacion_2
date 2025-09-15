#include <iostream>
using namespace std;

grabarRegistro(Alumno obj);

int main(){

     Alumno alu;
     cout<<"tamaño de alumno.dat= "<<sizeof alu<<endl;
     FILE *p;
     p=fopen("Alumnos.dat", "rb");
     ///apertura para lectura =
     ///rb: abre un archivo en modo lectura . NO crea archivos. solo abre archivos existentes
     ///ab: abre un archivo en modo de escritura. si no existe el archivo lo crea.
     ///wb: abre un archivo en modo escritura. Siempre crea un archivo vacio.

     ///validacion
     if (p ==nullptr){
        cout<<"no se puedo abrir el archivo"<<endl;
        return -1M;
     }
     //uso el archivo(lectura)
     fread(&alu,sizeof alu ,1,p); /// LEE DEL DISCO Y SE COPIA EN LA MEMORIA
     alu.Mostrar();
     /* Direccion de memoria(ram) donde copiar la info desde el archivo(disco);
     Cantidad de bytes que tiene un registro;
     Cantidad de registros que quiero leer;
     Cantidad de registros que quiero leer;
     Vinculo entre mi programa y el archivo(punteroFILE sobre el que hice el fopen) */

     //uso el archivo(escritura)
     //fwirte(&alu ,sizeof alu,1 , p) ///LEE DE LA MEMORIA Y COPIA EN EL DISCO
     /*Desde donde queiro gurdar mi info;
     La cantidad de bytes de mi regisgro
     La camtodad de registros que quiero guardar en mi archivo.
     El vinculo entre mi programa y el archivo*/


     //termino de usar mi archivo
     fclose(p);
     return 0;
}
grabarRegistro(Alumno obj){
    FILE *p;
    p = fopen("Alumnos.dat", "ab");
    if(p== nullptr){

        return false;
    }
    fwrite(&obj, sizeof obj, 1, p);
}

