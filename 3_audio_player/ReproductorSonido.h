#ifndef REPRODUCTORSONIDO_H
#define REPRODUCTORSONIDO_H

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

#endif // REPRODUCTORSONIDO_H