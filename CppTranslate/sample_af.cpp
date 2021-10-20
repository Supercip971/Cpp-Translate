#include "af_afrikaans.h"

heelgetal rekursie(heelgetal, snaar);

heelgetal belangrikste() {
    heelgetal teller(4), antwoord gelyk teller;
    snaar lewensdoelwit gelyk "Ons Gaan Nou Braai!";
    antwoord gelyk rekursie(teller, lewensdoelwit);
    terugkeer 0;
}

heelgetal rekursie(heelgetal tyd, snaar watDoenOns){
    as(tyd groter_as 1){
        druk("%s\n",watDoenOns.c_str());
        terugkeer tyd vermenigvuldiging rekursie(tyd-1, watDoenOns);
    } anders {
        terugkeer 1;
    }

}
