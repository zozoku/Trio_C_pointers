#include <stdio.h>
#include <stdlib.h>
#include "pointerek.h"

void paritas_valogat(int *be, int be_db, int *ki_paros, int *ki_ptln, int *ki_paros_db) {
    int i_paros = 0, i_ptln = 0;
    for (int i = 0; i != be_db; ++i) {
        if (be[i] % 2 == 0) {
            ki_paros[i_paros++] = be[i];
        } else {
            ki_ptln[i_ptln++] = be[i];
        }
    }
    *ki_paros_db = i_paros;
}

void egesz_tomb_kiir(int *be, int be_db) {
    for (int i = 0; i != be_db; ++i)
        printf("%d, ", be[i]);
    printf("\n");
}
