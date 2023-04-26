// TP1
// Punto 1
#include <iostream>
#include <vector>
#include <string>

#include "Cliente.h"
#include "Cliente.cpp"

#include "Orden.h"
#include "Orden.cpp"


int main(void)
{
    //Dado que usamos rand() en la creacion del arreglo, seteamos nueva semilla
    time_t current_time = time(NULL);
    srand((unsigned)time(NULL));

    int longitud_arreglo;

    std::cout << "Ingrese la longitud del arreglo a ordenar: ";
    std::cin >> longitud_arreglo;
    std::cout << std::endl;

    Cliente nuevoCliente(longitud_arreglo);

    OrdenAscendente nuevoOrdenAs;
    OrdenDescendente nuevoOrdenDes;

    nuevoOrdenAs.Ordenar(*nuevoCliente.ObtenerArreglo());

    std::cout << std::endl;

    nuevoOrdenDes.Ordenar(*nuevoCliente.ObtenerArreglo());

    std::cout << std::endl;

    return 0;
};