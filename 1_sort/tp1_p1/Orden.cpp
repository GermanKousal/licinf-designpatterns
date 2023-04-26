#include "Orden.h"

void OrdenAscendente::Ordenar(std::vector<int> arreglo)
{

    int i, j, temp = 0;

    std::cout << "El arreglo a ordenar es:" << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }

    std::cout << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        for (j = i + 1; j < arreglo.size(); j++)
        {
            if (arreglo[j] < arreglo[i])
            {
                temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }

    std::cout << "El arreglo ordenado de forma ascendente es:" << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }

    std::cout << std::endl;
}

void OrdenDescendente::Ordenar(std::vector<int> arreglo)
{

    int i, j, temp = 0;

    std::cout << "El arreglo a ordenar es:" << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }

    std::cout << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        for (j = i + 1; j < arreglo.size(); j++)
        {
            if (arreglo[i] < arreglo[j])
            {
                temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }

    std::cout << "El arreglo ordenado de forma descendente es:" << std::endl;

    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }

    std::cout << std::endl;
}