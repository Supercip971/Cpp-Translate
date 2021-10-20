#pragma once
//C++ na Afrikaans
//Net vir die lekkerte
//Baie dieselfde as die German een
#include <string>
#include <list>
#include <cstring>
#include <vector>

#define cpp_afrikaans
#pragma region ander
	#define gebruik using
	#define belangrikste main
	#define __LYN__ __LINE__
	#define __LEER__ __FILE__
#pragma endregion

#pragma region af_operateur
	#define patroonplaat template
	#define grootte_van sizeof
	#define klas class
	#define struktureer struct
	#define enumerering enum
	#define konstante const
	#define virtuele virtual
	#define statiese static
	#define openbare public
	#define beskerm protected
	#define gooi throw
	#define terugkeer return
	#define nuwe new
	#define skrap delete
	#define skrap_skikking delete[]
	#define of or
	#define en and
	#define nie not
	#define waar true
	#define valse false
	#define byvoeging +
	#define gelyk =
	#define baie_gelyk ==
	#define vermenigvuldiging *
	#define aftrek -
	#define verdeel /
	#define verwysing(A) (&A)
	#define wyser(A) A*
	#define groter_as >
	#define kleiner_als < 
	#define is_waar == waar
	#define is_valse == valse
#pragma endregion

#pragma region type
	gebruik leemte = void;
	gebruik karakter = char;
	gebruik heelgetal = int;
	gebruik dryf = float;
	gebruik dubbel = double;
	gebruik snaar = std::string;
	gebruik wys_karakter = char*;
	patroonplaat<klas T>
	gebruik vektor = std::vector < T>;
	patroonplaat<klas T>
	gebruik lys = std::list<T>;
#pragma endregion

#pragma region logika
	#define as if
	#define anders else
	#define anders_as else if
	#define terwyl while
	#define vir for
	#define vir_elke for each
#pragma endregion

#pragma region funksie
	#define druk printf
#pragma endregion

#define geheue_kopie memcpy
#define geheue_stel memset
#define snaar_lengte strlen
#define snaar_kopieer strcpy
