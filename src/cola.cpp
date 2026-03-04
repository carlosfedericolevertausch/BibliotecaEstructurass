#include <iostream>
#include "../include/cola.h"

using namespace std;

Cola::Cola() {
    frente = fin = nullptr;
}

void Cola::insertarQ(int valor) {
    NodoCola* nuevo = new NodoCola{valor, nullptr};

    if (fin == nullptr) {
        frente = fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }
}

void Cola::eliminarQ() {
    if (frente == nullptr) return;

    NodoCola* aux = frente;
    frente = frente->siguiente;

    if (frente == nullptr) fin = nullptr;

    delete aux;
}

void Cola::mostrar() {
    NodoCola* aux = frente;
    while (aux != nullptr) {
        cout << aux->dato << " <- ";
        aux = aux->siguiente;
    }
    cout << "NULL\n";
}
