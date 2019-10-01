#include "ListaLibros.h"
// #include "Libro.h"

ListaLibros::ListaLibros(){
	primero=nullptr;
	actual=nullptr;
}

void ListaLibros::setActual(Nodo *actual){
	ListaLibros::actual=actual;
}

void ListaLibros::setPrimero(Nodo *primero){
	ListaLibros::primero=primero;
}

Nodo *ListaLibros::getActual()const{
	return actual;
}

Nodo *ListaLibros::getPrimero()const{
	return primero;
}

ListaLibros::~ListaLibros(){
	while (primero!= nullptr){
		actual=primero;
		primero=primero->getNext();
		delete (actual);
	}
}

string ListaLibros::toString(){
	string informe;
	actual=primero;
	while (actual!=nullptr){
		informe+=actual->toString();
		actual=actual->getNext();
	}
	return informe;
}

void ListaLibros::insertarFinal(Libro &_libro){
 	actual = primero;
    if (primero == nullptr) {
        primero = new Nodo(_libro, nullptr);
    } 
	else {
        while (actual->getNext() != nullptr) {
            actual=actual->getNext();
        }
        actual->setNext(new Nodo(_libro, nullptr));
    }
}

bool ListaLibros::eliminarFinal() {
	actual=primero;
	if(primero==nullptr){
		return false;
	} else if (primero->getNext() == nullptr) {
		delete primero;
	} else {
		Nodo* penultimo = actual; //Para no ser el ultimo directamente
		while(penultimo->getNext()->getNext()!=nullptr) {
			penultimo = penultimo->getNext();
		}
		delete (penultimo->getNext());
		penultimo->setNext(nullptr);
	}
	return true;
}

bool ListaLibros::encuentraLibro(int n) {
	actual=primero;
	while(actual!=nullptr){
		if(n==actual->getLibro().getIn()) {
			return true;
		}
		else {
			actual = actual->getNext();
		}
	} return false;
}

string ListaLibros::obtenerNombreLibro(int n) {
	actual=primero;
	while(actual !=NULL){
	if(n == actual->getLibro().getIn())
		return actual->getLibro().getTitulo();
	else
		actual->getNext();}
	return "No se ha encontrado el libro";	
}

int ListaLibros::totalNodos(){
	int totalNodos=0;
	actual=primero;
	while(actual!=nullptr){
		totalNodos ++;
		actual=actual->getNext();
	}
	return totalNodos;
}
