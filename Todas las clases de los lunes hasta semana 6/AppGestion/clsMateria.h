#pragma once

class Materia{
    ///propiedades
    private:
        int _codigo;
        char nombre[50];
        int cantidadAlumnos;
        int cantidadDocentes;
    public:
        ///metodos (comportamientos):
        void Cargar(){}
        void Mostrar(){}
        void setCodigo(int c);
        void setNombre(const char *n);
        void setCantidadDocentes(int cD);
        void setCantidadAlumnos (int cA);

        int getCodigo();
        const char *getNombre():
        int getCantidadAlumnos();
        int getCantidadDocentes();

};
