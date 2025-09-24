#pragma once

class Materia{
    ///PROPIEDADES:
    ///INFORMACION QUE PRETENDO ALMACENAR DE MI OBJETO
    private:
        int codigo;
        char nombre[50];
        int cantidadAlumnos;
        int cantidadDocentes;
    public:
    ///M�TODOS (COMPORTAMIENTO):
        void Cargar();
        void Mostrar();
        ///SETTERS
        ///RECIBEN UN VALOR POR PARAMETRO Y SE LO ASIGNAN A
        ///LA PROPIEDAD CORRESPONDIENTE.
        void setCodigo(int c);
        void setNombre(const char *n);
        void setCantidadAlumnos(int cA);
        void setCantidadDocentes(int cD);
        ///GETTERS
        int getCodigo();
        const char *getNombre();
        int getCantidadAlumnos();
        int getCantidadDocentes();
};
