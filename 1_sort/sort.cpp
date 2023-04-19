// TP1
// Punto 1
#include <iostream>
#include <vector>
#include <string>

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
    // private:
    std::vector<int> arreglo;
};

class Orden
{
public:
    virtual void ordenar() = 0;
};

class OrdenAscendente : public Orden
{
public:
    void ordenar();
};

int main(void)
{
    time_t current_time = time(NULL);
    srand((unsigned)time(NULL));

    Cliente nuevoCliente(1);
    
    for (int i=0; i<nuevoCliente.arreglo.size() ; i++)
    {
        std::cout << std::to_string(nuevoCliente.arreglo[i]) + " ";
    }
    std::cout << nuevoCliente.arreglo.size();
    return 0;
};

void OrdenAscendente::ordenar()
{
    std::cout << "\ncorrecto\n";
}