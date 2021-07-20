#include <stdio.h>
#include <stdlib.h>
#include "pointerek.h"


void szamol_verzio1(int a, int b, int *osszeg, int *szorzat) {
    *osszeg = a + b;
    *szorzat = a * b;
}

Muveletek* szamol_verzio2(int a, int b) {
    Muveletek* szamitasok = (Muveletek*) malloc(sizeof(Muveletek));
	szamitasok->elso_operandus = a;
	szamitasok->masodik_operandus = b;
	szamitasok->osszeg = a + b;
	szamitasok->szorzat = a * b;
	return szamitasok;
}

