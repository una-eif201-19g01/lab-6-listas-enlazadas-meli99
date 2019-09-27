#ifndef LISTALIBROS_H
#define LISTALIBROS_H

#include "Nodo.h"

using namespace std;

class ListaLibros {
	Nodo *actual;
	Nodo *primero;
public:
	ListaLibros();
	void setActual(Nodo *actual);
	void setPrimero(Nodo *primero);
	Nodo *getActual()const;
	Nodo *getPrimero()const;
	virtual ~ListaLibros();
	string toString();
	void insertarFinal(Libro &_libro);
	bool eliminarFinal();
	bool encuentraLibro(int);
	string obtenerNombreLibro(int);
	int totalNodos();
};

#endif
