#ifndef CAJAFUERTE_H
#define CAJAFUERTE_H

#include "stdincludes.h"

class CajaFuerte
{
public:
    CajaFuerte(void);
    void desactivar(void);
    void activar(void);
    void configurar(void);

private:
    short estado = 1;   //1 =: desactivada; 2 =: activada; 3=: configuracion 
    short codigo = 0;
};

#endif // CAJAFUERTE_H