#ifndef CLIENTE_CPP
#define CLIENTE_CPP

#include "Cliente.h"

void Cliente::MostrarArreglo(void)
{
    std::cout << "El arreglo de Cliente es: [";
    for (int i = 0; i < arreglo.size(); i++)
    {
        std::cout << std::to_string(arreglo[i]) + " ";
    };
    std::cout << "]";
}

std::vector<int> *Cliente::ObtenerArreglo(void)
{
    return &arreglo;
}

#endif // CLIENTE_CPP