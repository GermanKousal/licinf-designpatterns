// TP1
// Punto 2

#include "tp1_p2/tp1_p2.h"

int main(void)
{
    char c; // para pausar entre llamadas a metodos de CajaFuerte

    CajaFuerte caja_fuerte;
    std::cin >> c;

    caja_fuerte.configurar();
    std::cin >> c;
    caja_fuerte.configurar();
    std::cin >> c;

    caja_fuerte.desactivar();
    std::cin >> c;
    caja_fuerte.desactivar();
    std::cin >> c;

    caja_fuerte.activar();
    std::cin >> c;
    caja_fuerte.activar();
    std::cin >> c;

    caja_fuerte.desactivar();
    std::cin >> c;
    caja_fuerte.configurar();
    std::cin >> c;
    caja_fuerte.activar();
    std::cin >> c;
    caja_fuerte.desactivar();
    std::cin >> c;

    return 0;
};