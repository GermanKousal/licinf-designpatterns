// TP1
// Punto 3

#include <iostream>
#include <vector>
#include <string>

class ReproductorSonido
{
public:
    ReproductorSonido(void);
    void agregarArchivoSonido(std::string);
    void stop(void);
    void play(void);
    void next(void);

private:
    std::vector<std::string> canciones;
    std::string actual;
    static bool existe;
};

int main(void)
{
    ReproductorSonido nuevo_reproductor;
    ReproductorSonido nuevo_reproductor2; // falta manejar la excepcion

    return 0;
}

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
