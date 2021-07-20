#include <stdio.h>
#include <stdlib.h>
#include "pointerek.h"

int main()
{
    // 1. Mintafeladathoz: Cím szerinti paraméterátadás
    int osszeg,
        szorzat;
    szamol_verzio1(7, 13, &osszeg, &szorzat);
    printf("1. Mintafeladathoz: Cim szerinti parameteratadas\n\n");
    printf("Verzio 1. --- a \"szamol()\" fuggveny a ket sajat parameteren\n");
    printf("Verzio 1. --- keresztul szallitja az eredmenyt!\n");
    printf("Osszeg: %d\nSzorzat: %d\n\n", osszeg, szorzat);
    printf("Verzio 2. --- a \"szamol()\" fuggveny visszaadott erteke egy \n");
    printf("Verzio 2. --- struktura mutato, ez mutat az eredmenyekre!\n");
    Muveletek *szamitasok = szamol_verzio2(7, 13);
    printf("Osszeg: %d\nSzorzat: %d\n\n", szamitasok->osszeg, szamitasok->szorzat);

    // 2. Mintafeladathoz: Tömb átadása függvénynek
    printf("2. Mintafeladathoz: Tomb atadasa fuggvenynek\n\n");
    int szamok[10] = { 1, 7, 2, 6, 9, 3, 4, 5, 9, 1 };
    int paros[10], ptln[10];
    int paros_db, ptln_db;

    paritas_valogat(szamok, 10, paros, ptln, &paros_db);
    ptln_db = 10 - paros_db;

    printf("Eredeti szamok:\n");
    egesz_tomb_kiir(szamok, 10);
    printf("\nParosak:\n");
    egesz_tomb_kiir(paros, paros_db);
    printf("\n");
    printf("Paratlanok:\n");
    egesz_tomb_kiir(ptln, ptln_db);

    // 3. Mintafeladathoz:
    printf("\n3. Mintafeladathoz: Szoveg / string / megforditasa\n\n");
    char elso[] = "hello vilag!";

    char masodik[20];
    megfordit_uj_tombbe(elso, masodik);
    printf("[%s] [%s]\n", elso, masodik);

    printf("[%s]\n", masodik);
    megfordit_helyben(masodik);
    printf("[%s]\n", masodik);

    //4. Mintafeladathoz: Szököztelenítés - "Mindentegybevéve"
    printf("\n4. Mintafeladathoz: Szokoztelenites - \"Mindentegybeveve\"\n\n");
    char hello[] = "H e l l o, vilag!";

    spacetelenit(hello);
    printf("Mindentegybeirok: [%s]\n", hello);

    return 0;
}
