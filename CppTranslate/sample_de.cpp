#include "de_german.h"
vorlage<klasse t> klasse Beispiel{

};

ganzzahl haupt() {
  statisch bool element gleich wahr;
  falls(element ist_falsch) { rückgabe 1; }
  c_zeichenkette p = neu zeichen[10];
  p[0] = 'c';
  p[1] = 0;

  ausgabef(p);

  rückgabe 0;
}

// bad and evil source code:

template <class T> class Example {};

int main() {
  static bool element = true;
  if (element == false) {
    return 1;
  }
  char *p = new char[10];
  p[0] = 'c';
  p[1] = 0;

  printf(p);
  return 0;
}
