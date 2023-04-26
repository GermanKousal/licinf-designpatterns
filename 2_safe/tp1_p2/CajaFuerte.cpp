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
        // desactivado -> configuracion
        estado = 3; // pasa a estado configuracion
        std::cout << "Desactivado -> Configuracion" << std::endl;
        cambiarCodigo();
        break;
    case 2:
        // activado -> configuracion
        std::cout << "No se puede configurar cuando la CajaFuerte esta activada." << std::endl;
        break;
    case 3:
        // configuracion -> configuracion
        std::cout << "Ya se encuentra en configuracion." << std::endl;
        break;
    default:; // Sin implementacion
    }
}

void CajaFuerte::cambiarCodigo(void)
{
    std::cout << "Ingrese nuevo PIN de 4 numeros: ";
    std::cin >> codigo;
    std::cout << "El nuevo codigo es: " << std::to_string(codigo) << std::endl;
}