#include <iostream>
#include "ListaLibros.h"
#include "Libro.h"

using namespace std;

int main() {
    Libro libro1("Editorial la Editora", "Cuentos de Miedo", "Edgar Allan Poe", 1969, 2);
    Libro libro2("Editorial la Señora Nuñez", "Ataques de Risa", "Pancho", 2011, 3);
    ListaLibros* listalibros = new ListaLibros();

    listalibros->insertarFinal(libro1);
    listalibros->insertarFinal(libro2);
    cout << "Libros: \n" << listalibros->toString();

    cout << "****************************************** \n";

    listalibros->eliminarFinal();
    cout << "Libros: \n" << listalibros->toString();

    cout << "****************************************** \n";

    bool encontrado = listalibros->encuentraLibro(2);
    if(encontrado) {
        cout << "Libro encontrado! \n";
    } else {
        cout << "Libro no encontrado \n";
    }

    cout << "****************************************** \n";

    cout << listalibros->obtenerNombreLibro(2) << '\n';


    return 0;
}