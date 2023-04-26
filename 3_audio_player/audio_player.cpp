// TP1
// Punto 3

#include <iostream>
#include <vector>
#include <string>
#include "ReproductorSonido.h"
#include "ReproductorSonido.cpp"

int main(void)
{
    try
    {
        ReproductorSonido nuevo_reproductor;
        ReproductorSonido nuevo_reproductor2; // falta manejar la excepcion
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Final" << std::endl;
    return 0;
}