#include "Tarea.h"
#include <cstring>
Tarea::Tarea()
    :_id(0), _descripcion(""), -fecha(), _completado(false){}


Tarea:Tarea(int id, std::string descripcion, Fecha fecha, bool completado){
    setId(id);
    setDescripcion(descripcion);
    setFecha(fecha);
    setCompletado(completado);
}

void Tarea:setId(int id){
}
void Tarea:setDescripcion(std::string descripcion){
    strncpy(_descripcion, descripcion.c_str(),299);
    _descripcion[299] = '\0';
}
void Tarea:setCompletado(bool completado){
}

int Tarea:getID(){
}
std::string Tarea:getDescripcion(){
    return _descripcion;
}
int Tarea:getCompletado(){
}
