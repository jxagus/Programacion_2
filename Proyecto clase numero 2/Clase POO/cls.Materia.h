#ifndef CLS_MATERIA_H_INCLUDED
#define CLS_MATERIA_H_INCLUDED

class Materia{
    ///PROPIEDADES
    private:
        int codigo;
        char nombre[50];
        int cantidadAlumnos;
        int cantidadDocentes;
    ///METODOS
    public:
        void Cargar();
        void Mostrar();
    ///SETTERS(Asignar/modificar)
        void setCodigo(int c);
    ///GETTERS(Leer/enviar)
};

#endif // CLS_MATERIA_H_INCLUDED
