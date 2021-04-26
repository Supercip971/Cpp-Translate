#pragma once
#include <string>
#include <list>
#include <cstring>
#include <vector>

#define cpp_deutsch
#pragma region ander

#define benutze using
#define haupt main
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
#define virtuell virtual
#define statisch static
#define öffentlich public
#define geschützt protected

#define wirf throw
#define rückgabe return

#define neu new
#define lösche delete
#define lösche_array delete[]

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

#define größer_als >
#define kleiner_als < 

#define ist_wahr == wahr
#define ist_falsch == falsch

#pragma endregion

#pragma region type

benutze leere = void;

benutze zeichen = char;
benutze ganzzahl = int;
benutze fließkommazahl = float;
benutze doppelt_ganzzahl = double;
benutze zeichenkette = std::string;

benutze c_zeichenkette = char*;

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
#define ausgabef printf

#pragma endregion

#define kopiere_speicher memcpy
#define setze_speicher memset
#define c_zeichenkette_länge strlen
#define kopiere_satz strcpy
