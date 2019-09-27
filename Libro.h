#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
using namespace std;

class Libro {
	
	string editorial;
	string titulo;
	string autor;
	int in;
	int ano;

	
public:
	
	Libro();
	Libro(const string &editorial,const string &titulo,const string &autor,int ano,int in);
	void setEditorial(const string &editorial);
	void setTitulo(const string &titulo);
	void setAutor(const string &autor);
	void setIn(int in);
	void setAno(int ano);
	const string &getEditorial() const;
	const string &getTitulo() const;
	const string &getAutor() const;
	int getIn() const;
	int getAno() const;
	string toString();
	
};

#endif
