#ifndef PILA_H
#define PILA_H

struct NodoPila {
    int dato;
    NodoPila* siguiente;
};

class Pila {
private:
    NodoPila* cima;

public:
    Pila();
    void push(int valor);
    void pop();
    void mostrar();
};

#endif
