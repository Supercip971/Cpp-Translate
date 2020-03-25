#pragma once
// c++ en français
// juste pour le fun

#include <string>
#include <vector>
#define cpp_français
#pragma region autre
#define utilisant using
#define point_d_entrée main

#define __LIGNE__ __LINE__
#define __FICHIER__ __FILE__
#pragma endregion

#pragma region operateur
#define classe class
#define modèle template
#define constant const
#define taille_de size_of
#define opérateur operator
#define structure struct
#define énumération enum
#define virtuel virtual
#define statique static
#define publique public
#define privé private
#define sécurisé protected
#define nom_de_type typename
#define identificateur_de_type typeid
#define envoyer throw
#define retourner return
#define nouveau new
#define supprimer delete
#define supprimer_tableaux delete[]
#define ou or
#define et and
#define non not

#define vrai true
#define faux false

#define additionner +
#define égal =
#define multiplier *
#define soustraire -
#define diviser /
#define addresse_mémoire(A) &A
#define pointeur(A) A*
#define enfant :

#define est_vrai == vrai
#define est_faux == faux
#pragma endregion

#pragma region type

utilisant vide = void;

utilisant booléen = bool;
utilisant charactère = char;
utilisant intégral = int;
utilisant flottant = float;
utilisant double_flottant = double;
utilisant phrase = std::string;
modèle<classe T>
utilisant vecteur = std::vector < T>;

#pragma endregion
#pragma region boucle_ou_autre
#define si if
#define sinon else
#define répéter_tant_que while
#define pour for
#define pour_chacun for each
#pragma endregion

#pragma region fonctions
#define écrire(A) printf(A)

#pragma endregion
