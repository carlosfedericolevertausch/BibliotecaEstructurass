#ifndef LISTA_H
#define LISTA_H

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class Lista {
private:
    Nodo* cabeza;

public:
    Lista();
    void insertar(int valor);
    void eliminar(int valor);
    bool buscar(int valor);
    void mostrar();
};

#endif
