// TP1
// Punto 3

#include <iostream>
#include <vector>
#include <string>

class ReproductorSonido
{
public:
    void agregarArchivoSonido(std::string);
    void stop(void);
    void play(void);
    void next(void);

private:
    std::vector<std::string> canciones;
    std::string actual;
};

int main(void)
{
    ReproductorSonido nuevo_reproductor;
    return 0;
}

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
