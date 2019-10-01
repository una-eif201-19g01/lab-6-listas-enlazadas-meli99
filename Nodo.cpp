//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Nodo.h"

Nodo::Nodo() {
    next = nullptr;
}

Nodo::Nodo(const Libro& lib, Nodo* Next) {
    Nodo::next = Next;
    Nodo::libro = lib;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

void Nodo::setLibro(const Libro &libro) {
    Nodo::libro = libro;
}

Nodo* Nodo::getNext() const {
	return next;
}

const Libro& Nodo::getLibro() const {
	return libro;
}

std::string Nodo::toString() {
	return libro.toString();
}