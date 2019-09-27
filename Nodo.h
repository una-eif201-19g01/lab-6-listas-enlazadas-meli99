#ifndef NODO_H
#define NODO_H

#include "libro.h"
using namespace std;
class Nodo {
	Nodo *next;
	Libro libro;
public:
	Nodo();
	Nodo(const Libro &libro, Nodo *Next);
	void setNext(Nodo *next);
	void setLibro(const Libro &libro);
	Nodo *getNext() const;
	const Libro &getLibro() const;
	string toString();
};

#endif 
