#pragma once
// c++ en esperanto
// bona ŝerco, ĉu?

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_esperanto
#pragma region alia
#define uzanto using
#define precipa main

#define __LINIO__ __LINE__
#define __DOSIERO__ __FILE__
#pragma endregion

#pragma region operatoro

#define tipnomo typename
#define modelo template
#define dimensio_de sizeof
#define operatoro operator

#define klaso class
#define strukturo struct
#define enumeracio enum

#define konstanto const
#define virtuala virtual
#define statika static
#define enteksta inline

#define publika public
#define persona private
#define protektita protected

#define tipidentigo typeid

#define forĵeti throw
#define revenigo return

#define nova new
#define forigo delete
#define tabeloforigo delete[]

#define aŭ or
#define kaj and
#define ne not

#define vero true
#define malvero false

#define aldoni +
#define atribuas =
#define egalas ==
#define obligi *
#define subtrahi -
#define dividi /

#define referenco_de(A) (&A)
#define referenco(A) A*
#define ido_de :
#define indekso(A) [A]

#define pli_granda_ol >
#define pli_malgranda_ol <
#define pli_granda_aŭ_egala >=
#define pli_malgranda_aŭ_egala <=

#define estas_la_vero == vero
#define estas_la_malvero == malvero

#pragma endregion

#pragma region type

uzanto vaka = void;

uzanto bulea = bool;
uzanto signo = char;
uzanto entjero = int;
uzanto glitpunkta = float;
uzanto duobla_glitpunkta = double;
uzanto frazo = std::string;

uzanto listo_da_signoj_kiu_finas_per_nulo = char*;

modelo<klaso T>
uzanto vektoro = std::vector < T>;

modelo<klaso T>
uzanto listo = std::list<T>;

#pragma endregion
#pragma region ciklo_aŭ_alia

#define se if
#define alikaze else
#define aŭ_se else if
#define dum while
#define por for
#define por_ĉiuj for each
#pragma endregion

#pragma region funkcio
#define skribu printf

#pragma endregion

#define kopii_memoro memcpy
#define igi_memoro memset
#define dimensio_de_listo_da_signoj strlen
#define kopii_listo_da_signoj strcpy
