#ifndef REPRODUCTORSONIDO_CPP
#define REPRODUCTORSONIDO_CPP

#include <iostream>
#include <vector>
#include <string>
#include "ReproductorSonido.h"

ReproductorSonido::ReproductorSonido(void)
{
    if (!existe)
    {
        existe = true;
        std::cout << "Reproductor de Sonido creado." << std::endl;
    }
    else
    {
        throw std::logic_error("Ya existe un reproductor");
    }
}

bool ReproductorSonido::existe = false;

void ReproductorSonido::agregarArchivoSonido(std::string cancion)
{
    canciones.push_back(cancion);
}

void ReproductorSonido::stop(void)
{
}

void ReproductorSonido::play(void)
{
}

void ReproductorSonido::next(void)
{
}

#endif // REPRODUCTORSONIDO_CPP