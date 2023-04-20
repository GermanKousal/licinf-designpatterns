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
    void MostrarArreglo(void);
    std::vector<int> *ObtenerArreglo(void);

private:
    std::vector<int> arreglo;
};

class Orden
{
public:
    virtual void Ordenar(std::vector<int>) = 0;
};

class OrdenAscendente : public Orden
{
public:
    void Ordenar(std::vector<int>);
    //void Ordenar(void);
};

int main(void)
{
    
    time_t current_time = time(NULL);
    srand((unsigned)time(NULL));

    int longitud_arreglo;

    std::cout << "Ingrese la  longitud del arreglo a ordenar: ";
    std::cin >> longitud_arreglo;

    Cliente nuevoCliente(longitud_arreglo);

    /* nuevoCliente.MostrarArreglo(); */

    

    /*
    std::vector<int> * aux = nuevoCliente.ObtenerArreglo();

    for (int i=0 ; i<longitud_arreglo;i++)
    {
        std::cout << (*aux)[i] << std::endl;
    }
    */

    OrdenAscendente nuevoOrden;
    /* nuevoOrden.Ordenar(); */
    nuevoOrden.Ordenar(*nuevoCliente.ObtenerArreglo());
    return 0;
};


void Cliente::MostrarArreglo(void)
{
    std::cout << "El arreglo de Cliente es: [";
    for (int i = 0; i < arreglo.size(); i++)
    {
        std::cout << std::to_string(arreglo[i]) + " ";
    };
    std::cout << "]";
}


void OrdenAscendente::Ordenar(std::vector<int> arreglo)
{
    
    int i, j, temp, pass = 0;
    //int a[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};
    std::cout << "Input list ...\n";
    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }
    std::cout << std::endl;
    for (i = 0; i < arreglo.size(); i++)
    {
        for (j = i + 1; j < arreglo.size(); j++)
        {
            if (arreglo[j] < arreglo[i])
            {
                temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
        pass++;
    }
    std::cout << "Sorted Element List ...\n";
    for (i = 0; i < arreglo.size(); i++)
    {
        std::cout << arreglo[i] << "\t";
    }
    std::cout << "\nNumber of passes taken to sort the list:" << pass << std::endl;
    
   //std::cout  << "OrdenAscendente" << std::endl;
}



std::vector<int> *Cliente::ObtenerArreglo(void)
{
    return &arreglo;
}


/* void OrdenAscendente::Ordenar(void)
{
    std::cout << "Correcto";
} */