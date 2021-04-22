#pragma once
#include <string>
#include <list>
#include <cstring>
#include <vector>

#define cpp_deutsch
#pragma region ander

#define benutze using
#define einstiegspunkt main
#define __LEINE__ __LINE__
#define __DATEI__ __FILE__

#pragma endregion

#pragma region de_operator

#define vorlage template

#define größe_für sizeof
#define klasse class
#define struktur struct
#define aufzählung enum
#define konstant const
#define virtuellen virtual
#define statisch static
#define öffentliche public
#define geschützt protected

#define werfen throw
#define rückkehr return

#define neue new
#define löschen delete
#define löschen_array delete[]

#define oder or
#define und and
#define nicht not

#define wahr true
#define falsch false

#define hinzuzufügen +
#define gleich =
#define gleich ==
#define multiplizieren *
#define subtrahieren -
#define teilen /

#define referenz(A) (&A)
#define zeiger(A) A*
#define index(A) [A]

#define größer >
#define kleiner_als < 

#pragma endregion

#pragma region type

benutze leere = void;

benutze zeichen = char;
benutze ganzzahl = int;
benutze schweben = float;
benutze doppelt = double;
benutze satz = std::string;

benutze c_satz = char*;

vorlage<klasse T>
benutze vektor = std::vector < T>;

vorlage<klasse T>
benutze liste = std::list<T>;

#pragma endregion
#pragma region schleife

#define wenn if
#define sonst else
#define sonst_wenn else if
#define während while
#define für for
#define für_jede for each
#pragma endregion

#pragma region funktionen
#define schreiben printf

#pragma endregion

#define kopie_speicher memcpy
#define setzte_speicher memset
#define größe_c_satz strlen
#define kopie_satz strcpy
