#pragma once
// c++ en español
// sí, es un chiste

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_español
#pragma region otra
#define usando using
#define utilisando using
#define principal main

#define __LINEA__ __LINE__
#define __ARCHIVO__ __FILE__
#pragma endregion

#pragma region operador

#define nombre_de_tipo typename
#define plantilla template
#define tamañode sizeof
#define operador operator

#define clase class
#define estructura struct
#define enumerador enum

#define constante const
//#define virtual virtual
#define estático static
#define enlínea inline

#define público public
#define privado private
#define protegido protected

#define tipo_identificador typeid

#define enviar throw
#define retornar return

#define nuevo new
#define nueva new
#define eliminar delete
#define eliminar_arr delete[]

#define o or
#define y and
#define no not

#define verdadero true
#define falso false

#define sumar +
#define igual =
#define iguall ==
#define multiplicar *
#define restar -
#define dividir /

#define referencia_de(A) (&A)
#define apuntador(A) A*
#define hijo_de :
#define índice(A) [A]

#define mayor_que >
#define menor_que <
#define mayor_que_o_igual >=
#define menor_que_o_igual <=

#define es_verdadero == verdadero
#define es_falso == falso

#pragma endregion

#pragma region type

usando vacío = void;

usando booleano = bool;
usando caracter = char;
usando entero = int;
usando flotante = float;
usando doble_flotante = double;
usando frase = std::string;

usando cadena_de_caracteres_que_terminan_en_cero = char*;

plantilla<clase T>
utilisando vector = std::vector < T>;

plantilla<clase T>
utilisando lista = std::list<T>;

#pragma endregion
#pragma region bucle_u_otro

#define si if
#define sino else
#define sino_si else if
#define repetir_mientras while
#define por for
#define por_cada_uno for each
#pragma endregion

#pragma region funciones
#define escribir printf

#pragma endregion

#define copiar_memoria memcpy
#define colocar_memoria memset
#define longitud_de_cadena_de_caracteres strlen
#define copiar_cadena_de_caracteres strcpy
