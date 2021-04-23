#include "es_spanish.h"
plantilla<clase t>
clase ejemplo
{

};

entero principal()
{
	estático booleano elemento igual verdadero;
	si(elemento es_falso)
	{
		retornar 1;
	}
    cadena_de_caracteres_que_terminan_en_cero p = nuevo caracter[10];
	p índice(0) igual 'c';
	p índice(1) igual 0;

    escribir(p);

	retornar 0;
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
