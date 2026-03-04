#ifndef COLA_H
#define COLA_H

struct NodoCola {
    int dato;
    NodoCola* siguiente;
};

class Cola {
private:
    NodoCola* frente;
    NodoCola* fin;

public:
    Cola();
    void insertarQ(int valor);
    void eliminarQ();
    void mostrar();
};

#endif
