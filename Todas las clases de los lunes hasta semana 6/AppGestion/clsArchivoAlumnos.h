#include "clsAlumno.h"

class ArchivoAlumnos{
    private:
        char nombre[40];
    public:
        ArchivoAlumnos(const char *n="Alumnos.dat");
        int contarRegistros();
        Alumno leerRegistro(int);
        bool grabarRegistro(Alumno);
        bool modificarRegistro(Alumno, int);
        int buscarRegistro(int);
        void listarRegistros();
};


