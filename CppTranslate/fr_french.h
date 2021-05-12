#pragma once
// c++ en français
// juste pour le fun

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_français
#pragma region autre
#define utilisant using
#define point_d_entrée main

#define __LIGNE__ __LINE__
#define __FICHIER__ __FILE__
#pragma endregion

#pragma region operateur

#define nom_de_type typename
#define modèle template
#define taille_de sizeof
#define opérateur operator

#define classe class
#define structure struct
#define énumération enum

#define constant const
#define virtuel virtual
#define statique static
#define sur_la_ligne inline

#define publique public
#define privé private
#define sécurisé protected

#define identificateur_de_type typeid

#define envoie throw
#define retourne return

#define nouveau new
#define nouvelle new
#define supprimer delete
#define supprimer_tableaux delete[]

#define ou or
#define et and
#define non not

#define vrai true
#define faux false

#define additionner +
#define est =
#define égal ==
#define multiplier *
#define soustraire -
#define diviser /

#define référence_de(A) (&A)
#define pointeur(A) A*
#define enfant_de :
#define index(A) [A]

#define plus_grand_que >
#define plus_petit_que <
#define plus_grand_ou_égal >=
#define plus_petit_ou_égal <=

#define est_vrai == vrai
#define est_faux == faux

#pragma endregion

#pragma region type

utilisant vide = void;

utilisant booléen = bool;
utilisant caractère = char;
utilisant entier = int;
utilisant flottant = float;
utilisant double_flottant = double;
utilisant phrase = std::string;

utilisant chaine_de_caractère_c_terminant_par_un_zéro = char*;

modèle<classe T>
utilisant vecteur = std::vector < T>;

modèle<classe T>
utilisant liste = std::list<T>;

#pragma endregion
#pragma region boucle_ou_autre

#define si if
#define sinon else
#define sinon_si else if
#define répéter_tant_que while
#define pour for
#define pour_chacun for each
#pragma endregion

#pragma region fonctions
#define écrire printf

#pragma endregion

#define copier_mémoire memcpy
#define mettre_mémoire memset
#define taille_d_une_chaine_de_caractère_c strlen
#define copier_chaine_de_caractère strcpy
