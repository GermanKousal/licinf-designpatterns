#ifndef CAJAFUERTE_H
#define CAJAFUERTE_H

#include "stdincludes.h"

class CajaFuerte
{
public:
    void desactivar(void);
    void activar(void);
    void configurar(void);

private:
    short estado = 1;
    short codigo = 0;
};

#endif // CAJAFUERTE_H