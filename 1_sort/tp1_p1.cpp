// TP1
// Punto 1
#include <iostream>
#include <vector>
#include <string>

#include "Cliente.h"
#include "Cliente.cpp"



class Orden
{
public:
    virtual void Ordenar(std::vector<int>) = 0;
};

class OrdenAscendente : public Orden
{
public:
    void Ordenar(std::vector<int>);
};

class OrdenDescendente : public Orden
{
public:
    void Ordenar(std::vector<int>);
};

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