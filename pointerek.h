#ifndef POINTEREK_H_INCLUDED
#define POINTEREK_H_INCLUDED

// 1. Mintafeladathoz
typedef struct Operatorok {
	int elso_operandus;
	int masodik_operandus;
	int osszeg;
	int szorzat;
} Muveletek;

//1. Mintafeladathoz: Cím szerinti paraméterátadás
void szamol_verzio1(int, int, int*, int*);
Muveletek* szamol_verzio2(int, int);
//2. Mintafeladathoz: Tömb átadása függvénynek
void paritas_valogat(int*, int, int*, int*, int*);
void egesz_tomb_kiir(int*, int);

//3. Mintafeladathoz: Szöveg / string / megfordítása
void megfordit_uj_tombbe(char*, char*);
void megfordit_helyben(char*);


//4. Mintafeladathoz: Szököztelenítés - "Mindentegybevéve"
void spacetelenit(char*);

#endif // POINTEREK_H_INCLUDED
