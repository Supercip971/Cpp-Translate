#pragma once
#include <string>
#include <list>
#include <cstring>
#include <vector>

#define cpp_deustch
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
#define konstante const
#define virtuel virtual
#define statisch static
#define öffentlich public
#define geschützt protected

#define werfen throw
#define zurück return

#define neu new
#define löschen delete
#define löschen_array delete[]

#define oder or
#define und and
#define nicht not

#define wahr true
#define falsch false

#define addiere +
#define gleich =
#define ist_gleich ==
#define multipliziere *
#define subtrahiere -
#define teilen /

#define referenz(A) (&A)
#define zeiger(A) A*
#define index(A) [A]

#define größer_als >
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

#define falls if
#define sonst else
#define sonst_falls else if
#define während while
#define für for
#define für_jedes for each
#pragma endregion

#pragma region funktionen
#define schreiben printf

#pragma endregion

#define kopiere_speicher memcpy
#define setze_speicher memset
#define größe_c_satz strlen
#define kopiere_satz strcpy
