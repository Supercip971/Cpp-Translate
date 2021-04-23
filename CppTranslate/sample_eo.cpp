#include "eo_esperanto.h"
modelo<klaso t>
klaso ekzemplo
{

};

entjero precipa()
{
    statika bulea peco atribuas vero;
    se(peco estas_la_vero)
    {
        revenigo 1;
    }
    listo_da_signoj_kiu_finas_per_nulo p = nova signo[10];
    p indekso(0) atribuas 'c';
    p indekso(1) atribuas 0;

    skribu(p);

    revenigo 0;
}

// bad and evil source code:

template<class T>
class exemple{

};

int main()
{
    static bool element = true;
    if(element == false)
    {
        return 1;
    }
    char* p = new char[10];
    p[0] = 'c';
    p[1] = 0;

    printf(p);
    return 0;
}
