#pragma once
#include "fecha.h"
class Tarea
{
    public:
        Tarea();
        Tarea(int id, std::string descripcion, Fecha fecha, bool completado);

        void setId(int id);
        void setDescripcion(std::string descripcion);
        void setCompletado(bool completado);

        int getID();
        std::string getDescripcion();
        int getCompletado();

    protected:

    private:
        int _id;
        Fecha _fecha; ///COMPOSICION
        bool _completado;
        char _descripcion[300];
};

