#include <iostream>
#include "../include/lista.h"

using namespace std;

Lista::Lista() {
    cabeza = nullptr;
}

void Lista::insertar(int valor) {
    Nodo* nuevo = new Nodo{valor, cabeza};
    cabeza = nuevo;
}

bool Lista::buscar(int valor) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->dato == valor) return true;
        aux = aux->siguiente;
    }
    return false;
}

void Lista::eliminar(int valor) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;

    while (actual != nullptr && actual->dato != valor) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) return;

    if (anterior == nullptr)
        cabeza = actual->siguiente;
    else
        anterior->siguiente = actual->siguiente;

    delete actual;
}

void Lista::mostrar() {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }
    cout << "NULL\n";
}
