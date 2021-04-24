#include "be_belarusian.h"
узор<кляса t>
кляса прыклад
{

};

цэлы_лік зачатак()
{
	статычны булеев элемент прыраўнай праўда;
	калі(элемент ілжывы)
	{
		вярні 1;
	}
	указка_на_поле_сыбалаў_які_закончаны_нулявым_сымбалем p = новы сымбаль[10];
	p індэкс(0) прыраўнай 'c';
	p індэкс(1) прыраўнай 0;

	выпіш(p);

	вярні 0;
}

// bad and evil source code:

template<class T>
class exemple {

};

int main()
{
	static bool element = true;
	if (element == false)
	{
		return 1;
	}
	char* p = new char[10];
	p[0] = 'c';
	p[1] = 0;

	printf(p);
	return 0;
}
