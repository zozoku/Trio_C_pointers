#ifndef POINTEREK_H_INCLUDED
#define POINTEREK_H_INCLUDED

// 1. Mintafeladathoz
typedef struct Operatorok {
	int elso_operandus;
	int masodik_operandus;
	int osszeg;
	int szorzat;
} Muveletek;

//1. Mintafeladathoz: C�m szerinti param�ter�tad�s
void szamol_verzio1(int, int, int*, int*);
Muveletek* szamol_verzio2(int, int);
//2. Mintafeladathoz: T�mb �tad�sa f�ggv�nynek
void paritas_valogat(int*, int, int*, int*, int*);
void egesz_tomb_kiir(int*, int);

//3. Mintafeladathoz: Sz�veg / string / megford�t�sa
void megfordit_uj_tombbe(char*, char*);
void megfordit_helyben(char*);


//4. Mintafeladathoz: Sz�k�ztelen�t�s - "Mindentegybev�ve"
void spacetelenit(char*);

#endif // POINTEREK_H_INCLUDED
