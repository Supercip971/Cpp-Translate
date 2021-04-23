#include "de_german.h"
vorlage<klasse t>
klasse exemple
{

};

ganzzahl einstiegspunkt()
{
	statisch bool element gleich wahr;
	wenn(element ist_falsch)
	{
		rückgabe 1;
	}
	c_zeichenkette p = neue zeichen[10];
	p index(0) gleich 'c';
	p index(1) gleich 0;
	
	druckf(p);

	rückgabe 0;
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
