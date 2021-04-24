#pragma once
// c++ па беларускі
// гэткі жарт пра сяброў

#include <string>
#include <list>
#include <cstring>
#include <vector>
#define cpp_беларускі
#pragma region атрыбуты
#define з_выужываннем using
#define зачатак main

#define __РАДОК__ __LINE__
#define __ФАЙЛ__ __FILE__
#pragma endregion

#pragma region operateur

#define імятыпу typename
#define узор template
#define вялікасць sizeof
#define аператар operator

#define кляса class
#define структура struct
#define пераліченне enum

#define нязменны const
#define магчымы virtual
#define статычны static
#define на_адным_радку inline

#define агульны public
#define асабісты private
#define абаронены protected

#define ідэнтыфікатар_тыпу typeid

#define выкінь throw
#define вярні return

#define новы new
#define новае new
#define новая new
#define выдаліць delete
#define выдаліць_поле delete[]

#define альбо or
#define або or
#define і and
#define ды and
#define не not
#define ня not

#define праўда true
#define хлусня false

#define скласаці +
#define прыраўнай =
#define аднолькавы ==
#define памножыць *
#define адняць -
#define выдзялеліць /

#define адказ_на(A) (&A)
#define указка(A) A*
#define наследуе :
#define індэкс(A) [A]

#define большае_за >
#define меншае_за <
#define большае_або_роўнае_да >=
#define меншае_або_роўнаае_да <=


#define праўдзівы == праўда
#define ілжывы == хлусня

#pragma endregion

#pragma region type

з_выужываннем беспадстаўны = void;

з_выужываннем булеев = bool;
з_выужываннем сымбаль = char;
з_выужываннем цэлы_лік = int;
з_выужываннем плавоўцы = float;
з_выужываннем двайны = double;
з_выужываннем радок = std::string;

з_выужываннем указка_на_поле_сыбалаў_які_закончаны_нулявым_сымбалем = char*;

узор<кляса T>
з_выужываннем вектар = std::vector < T>;

узор<кляса T>
з_выужываннем спіс = std::list<T>;

#pragma endregion
#pragma region if_else_for_while

#define калі if
#define інакш else
#define інакш_калі else if
#define пакуль while
#define пра for
#define пра_ўсе for each
#pragma endregion

#pragma region метад
#define выпіш printf

#pragma endregion

#define дакладны_спіс_памяці memcpy
#define настаў_памяць memset
#define велічыня_радку strlen
#define копія_радку strcpy
