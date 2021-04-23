#pragma once
// c++ på dansk
// bare for sjovt

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_dansk
#pragma region anden
#define benyt using
#define indgang main

#define __LINJE__ __LINE__
#define __FIL__ __FILE__
#pragma endregion

#pragma region operatør

#define typenavn typename
#define skabelon template
#define størrelse_af sizeof
#define operatør operator

#define klasse class
#define struktur struct
#define optælling enum

#define konstant const
#define virtuel virtual
#define statisk static
#define på_linjen inline

#define offentlig public
#define privat private
#define beskyttet protected

#define type_identifikator typeid

#define kast throw
#define aflever return

#define ny new
#define nyt new
#define slet delete
#define slet_række delete[]

#define eller or
#define og and
#define ikke not

#define sandt true
#define falsk false

#define lagt_sammen_med +
#define er =
#define er_lig_med ==
#define gange *
#define fra_trukket -
#define delt_med /

#define reference(A) (&A)
#define markør(A) A*
#define barn_af :
#define indeks(A) [A]

#define større_end >
#define mindre_end <
#define større_eller_lig_med >=
#define mindre_eller_lig_med <=

#define er_sandt == sandt
#define er_falsk == falsk

#pragma endregion

#pragma region type

benyt tom = void;

benyt boolsk = bool;
benyt tegn = char;
benyt heltal = int;
benyt flydende = float;
benyt dobbelt_flydende = double;
benyt tekststreng = std::string;

benyt nul_termineret_tekststreng = char*;

skabelon<klasse T>
benyt vektor = std::vector < T>;

skabelon<klasse T>
benyt liste = std::list<T>;

#pragma endregion
#pragma region løkker_og_andre

#define hvis if
#define ellers else
#define ellers_hvis else if
#define så_længe while
//#define for for
#define for_hver for each

#define mens == så_længe
#pragma endregion

#pragma region funktioner
#define skriv printf

#pragma endregion

#define kopier_hukommelse memcpy
#define sæt_hukommelse memset
#define længde_af_nul_termineret_tekststreng strlen
#define kopier_nul_termineret_tekststreng strcpy
