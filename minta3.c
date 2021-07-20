#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointerek.h"

void megfordit_uj_tombbe(char *be, char *ki) {
    /* elmegy�nk a legutols� karakterig olyan m�don,
     * hogy megkeress�k a lez�r� null�t, �s visszal�p�nk 1-et */
    int i = strlen(be) - 1;

    /* azt�n visszaj�v�nk, �s k�zben a m�sik t�mbbe �rjuk a bet�ket */
    int j = 0;
    while (i >= 0) {
        ki[j] = be[i];
        ++j;
        --i;
    }

    /* v�g�re kell lez�r� nulla! */
    ki[j] = '\0';
}

void megfordit_helyben(char *str) {
    /* meghat�rozzuk a m�retet */
    int meret = strlen(str);

    /* ut�na elmegy�nk a k�zep�ig, folyamatosan elv�gezve a cser�ket */
    for (int i = 0; i != meret/2; ++i) {
        /* str[i] <-> str[meret-1-i] */
        char temp = str[i];
        str[i] = str[meret-1-i];
        str[meret-1-i] = temp;
    }

    /* a lez�r� nulla maradt a hely�n. */
}
