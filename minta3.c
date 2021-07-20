#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointerek.h"

void megfordit_uj_tombbe(char *be, char *ki) {
    /* elmegyünk a legutolsó karakterig olyan módon,
     * hogy megkeressük a lezáró nullát, és visszalépünk 1-et */
    int i = strlen(be) - 1;

    /* aztán visszajövünk, és közben a másik tömbbe írjuk a betûket */
    int j = 0;
    while (i >= 0) {
        ki[j] = be[i];
        ++j;
        --i;
    }

    /* végére kell lezáró nulla! */
    ki[j] = '\0';
}

void megfordit_helyben(char *str) {
    /* meghatározzuk a méretet */
    int meret = strlen(str);

    /* utána elmegyünk a közepéig, folyamatosan elvégezve a cseréket */
    for (int i = 0; i != meret/2; ++i) {
        /* str[i] <-> str[meret-1-i] */
        char temp = str[i];
        str[i] = str[meret-1-i];
        str[meret-1-i] = temp;
    }

    /* a lezáró nulla maradt a helyén. */
}
