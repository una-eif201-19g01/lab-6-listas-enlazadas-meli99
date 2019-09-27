#include "Libro.h"

Libro::Libro(){	
}

Libro::Libro(const string &editorial,const string &titulo,const string &autor,int ano,int in) : titulo(titulo),autor(autor),editorial(editorial),anno(anno),isbn(isbn){
}

void Libro::setEditorial(const string &editorial){
	Libro::editorial = editorial;
}

void Libro::setTitulo(const string &titulo){
	Libro::titulo = titulo;
}

void Libro::setAutor(const string &autor){
	Libro::autor = autor;
}

void Libro::setIn(int in){
	Libro::in=in;
}

void Libro::setAno(int ano){
	Libro::ano=ano;
}

const string &Libro::getEditorial()const{
	return editorial;
}

const string &Libro::getTitulo()const{
	return titulo;
}

const string &Libro::getAutor()const{
	return autor;
}

int Libro::getIn()const{
	return in;
}

int Libro::getAno()const{
	return ano;
}

string Libro::toString(){
	string reporte;
	reporte=+"Titulo del libro: "+getAutor()+"\n"+"el autor del libro es:"+getAutor()+ "\n" +"el año de publicacion del libro es:" + to_string(getAnno()) + "\n" + "el codigo ISBN del libro es: " +to_string(getIn()) + "\n";
	return reporte;
}
