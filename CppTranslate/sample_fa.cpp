#include "fa_persian.h"
قالب<کلاس ت>
کلاس مثال
{

};

صحیح اصلی()
{
	ساکن بولی عنصر می‌شود درست;
	اگر(عنصر نادرست‌است)
	{
		برگردان 1 را;
	}
    رشته‌کارکترهای‌سی‌که‌باصفرختم‌می‌شود پ می‌شود نو کارکتر[10];
	پ اندیس(0) می‌شود 'c';
	پ اندیس(1) می‌شود 0;

    بنویس(پ) را;

    برگردان 0 را;
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
