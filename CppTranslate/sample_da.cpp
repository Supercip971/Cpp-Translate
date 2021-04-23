#include "da_danish.h"
skabelon<klasse t>
klasse eksempel
{

};

heltal indgang() 
{
	statisk boolsk element er sandt;
	hvis(element er_falsk)
	{
		aflever 1;
	}
    nul_termineret_tekststreng p = nyt tegn[10];
	p indeks(0) er 'c';
	p indeks(1) er 0;
	
    skriv(p);

    aflever 0;
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
