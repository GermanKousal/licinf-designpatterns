#include "CajaFuerte.h"

CajaFuerte::CajaFuerte()
{
    estado = 1;
    codigo = 0;
    std::cout << "CajaFuerte creada" << std::endl;
    std::cout << "Estado: " << std::to_string(estado) << std::endl;
    std::cout << "Codigo: " << std::to_string(codigo) << std::endl;
}

void CajaFuerte::desactivar(void)
{
}

void CajaFuerte::activar(void)
{
}

void CajaFuerte::configurar(void)
{
    switch (estado)
    {
    case 1:
        // code block
        break;
    case 2:
        // code block
        break;
    case 3:
        break;
    default:
        // code block
        break;
    }
}
