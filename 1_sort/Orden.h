#ifndef ORDEN_H
#define ORDEN_H

#include <vector>

class Orden
{
public:
    virtual void Ordenar(std::vector<int>) = 0;
};

class OrdenAscendente : public Orden
{
public:
    void Ordenar(std::vector<int>);
};

class OrdenDescendente : public Orden
{
public:
    void Ordenar(std::vector<int>);
};

#endif // ORDEN_H