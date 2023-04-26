#ifndef CLIENTE_H
#define CLIENTE_H

#include "stdincludes.h"

class Cliente
{
public:
    Cliente(int largo = 0) : arreglo(largo)
    {
        for (size_t i = 0; i < largo; i++)
        {
            arreglo[i] = rand() % 100;
        }
    };
    void MostrarArreglo(void);
    std::vector<int> *ObtenerArreglo(void);

private:
    std::vector<int> arreglo;
};

#endif // CLIENTE_H