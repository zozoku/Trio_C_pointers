#include <stdio.h>
#include <stdlib.h>
#include "pointerek.h"

void spacetelenit(char *t) {
    /* v�gig megy�nk az �sszes karakteren */
    /* "honnan" mindig n�, "hova" csak n�ha */
    int hova = 0;
    for (int honnan = 0; t[honnan] != '\0'; ++honnan) {
        /* �s ami nem space, m�soljuk */
       if (t[honnan] != ' ') {   /* NEM 32, hanem ' '! */
                    t[hova] = t[honnan];
                    hova++;
                }
    }
    t[hova] = '\0';  /* lez�r� nulla! */
}
