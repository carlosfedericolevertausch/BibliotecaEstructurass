#include <iostream>
#include "../include/pila.h"

using namespace std;

Pila::Pila() {
    cima = nullptr;
}

void Pila::push(int valor) {
    NodoPila* nuevo = new NodoPila{valor, cima};
    cima = nuevo;
}

void Pila::pop() {
    if (cima == nullptr) return;

    NodoPila* aux = cima;
    cima = cima->siguiente;
    delete aux;
}

void Pila::mostrar() {
    NodoPila* aux = cima;
    while (aux != nullptr) {
        cout << aux->dato << endl;
        aux = aux->siguiente;
    }
}
