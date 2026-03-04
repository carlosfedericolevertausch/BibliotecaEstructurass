#include <iostream>
#include "../include/lista.h"
#include "../include/pila.h"
#include "../include/cola.h"

using namespace std;

int main() {

    Lista lista;
    lista.insertar(10);
    lista.insertar(20);
    lista.mostrar();

    Pila pila;
    pila.push(5);
    pila.push(8);
    pila.pop();
    pila.mostrar();

    Cola cola;
    cola.insertarQ(1);
    cola.insertarQ(2);
    cola.eliminarQ();
    cola.mostrar();

    return 0;
}
