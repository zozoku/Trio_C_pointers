#include <stdio.h>
#include <stdlib.h>
#include "pointerek.h"

void spacetelenit(char *t) {
    /* végig megyünk az összes karakteren */
    /* "honnan" mindig nõ, "hova" csak néha */
    int hova = 0;
    for (int honnan = 0; t[honnan] != '\0'; ++honnan) {
        /* és ami nem space, másoljuk */
       if (t[honnan] != ' ') {   /* NEM 32, hanem ' '! */
                    t[hova] = t[honnan];
                    hova++;
                }
    }
    t[hova] = '\0';  /* lezáró nulla! */
}
