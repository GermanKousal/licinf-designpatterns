// TP1
// Punto 4

#include <iostream>
#include <vector>
#include <string>

class Archivo
{
public:
    std::string mostrarNombre(void);
    std::string mostrarTipo(void);
    std::string mostrarTamanio(void);
    Archivo copiar(void);
    void borrar(void);
    void renombrar(std::string);
    void abrir(void);

private:
    std::string nombre;
    std::string tipo;
    std::string tamanio;
};

class Directorio
{
public:
    std::string mostrarNombre(void);
    std::string mostrarTamanio(void);
    Directorio copiar(void);
    void borrar(void);
    void renombrar(std::string);
    void abrir(void);
    void agregarArchivo(Archivo);
    void quitarArchivo(Archivo);
    void agregarDirectorio(Directorio);
    void quitarDirectorio(Directorio);

private:
    std::vector<Directorio> directorios;
    std::vector<Archivo> archivos;
    std::string nombre;
};

int main(void)
{
    Directorio directorio;
    std::cout << directorio.mostrarNombre() << std::endl;

    Archivo archivo;
    std::cout << archivo.mostrarNombre() << std::endl;

    return 0;
}

std::string Directorio::mostrarNombre(void)
{
    return "nombre directorio";
}

std::string Directorio::mostrarTamanio(void)
{
    return "tamanio";
}

Directorio Directorio::copiar(void)
{
    Directorio foo;
    return foo;
}

void Directorio::borrar(void)
{
    delete this;
}

void Directorio::renombrar(std::string nombre)
{
    (*this).nombre = nombre;
}

void Directorio::abrir(void)
{
}

void Directorio::agregarArchivo(Archivo archivo)
{
}

void Directorio::quitarArchivo(Archivo)
{
}
void Directorio::agregarDirectorio(Directorio)
{
}
void Directorio::quitarDirectorio(Directorio)
{
}

std::string Archivo::mostrarNombre(void)
{
    return "nombre archivo";
}

std::string Archivo::mostrarTipo(void)
{
    return "tipo";
}

std::string Archivo::mostrarTamanio(void)
{
    return "tamanio";
}

Archivo Archivo::copiar(void)
{
    Archivo foo;
    return foo;
}

void Archivo::borrar(void)
{
    delete this;
}

void Archivo::renombrar(std::string)
{
    (*this).nombre = nombre;
}

void Archivo::abrir(void)
{
}