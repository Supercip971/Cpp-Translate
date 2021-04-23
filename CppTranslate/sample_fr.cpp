#include "fr_french.h"
modèle<classe t>
classe example
{

};

entier point_d_entrée()
{
	statique booléen élément est vrai;
	si(élément est_faux)
	{
		retourne 1;
	}
    chaine_de_caractère_c_terminant_par_un_zero p = nouveau charactère[10];
	p index(0) est 'c';
	p index(1) est 0;
	
    écrire(p);

    retourne 0;
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
