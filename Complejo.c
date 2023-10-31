#include <stdlib.h>
#include <math.h>
#include "Complejo.h"

void manejaMsg(int);
COMPLEJO crearComplejo(void){
    COMPLEJO C;
    C = (COMPLEJO)malloc(sizeof(Complejo));
    if (C == NULL){
        manejaMsg(0);
        exit(0);
    }
    return C;
}

void asignaReal(COMPLEJO C, float r){
    C -> real = r;
}

void asignaImaginario(COMPLEJO C, float i){
    C -> imaginario = i;
}

float obtenReal(COMPLEJO C){
    return (C -> real);
}

float obtenImaginario(COMPLEJO C){
    return (C ->imaginario);
}

COMPLEJO suma(COMPLEJO C1, COMPLEJO C2){
    COMPLEJO C3 = crearComplejo();
    asignaReal(C3, obtenReal(C1) + obtenReal(C2));
    asignaImaginario(C3, obtenImaginario(C1) + obtenImaginario(C2));
    return C3;
}

COMPLEJO resta(COMPLEJO C1, COMPLEJO C2){
    COMPLEJO C4 = crearComplejo();
    asignaReal(C4, obtenReal(C1) - obtenReal(C2));
    asignaImaginario(C4, obtenImaginario(C1) - obtenImaginario(C2));
    return C4;
}

COMPLEJO productoEscalar(COMPLEJO C1, float k){//pedir el escalar
    COMPLEJO C5 = crearComplejo();
    asignaReal(C5, obtenReal(C1) * k);
    asignaImaginario(C5, obtenImaginario(C1) * k);
    return C5;
}

/* Profesora solo me falto el modulo pero no se si puedo usar alguna 
variable auxiliar para aguardar los cuadrados del real y el imaginario*/
COMPLEJO modulo(COMPLEJO C1){//decimal
    COMPLEJO C6 = crearComplejo();
    asignaReal(C6,pow(obtenReal(C1),2));
    asignaImaginario(C6, pow(obtenImaginario(C1),2));

    return C6;
}

COMPLEJO conjugado(COMPLEJO C1){
    COMPLEJO C7 = crearComplejo();
    asignaReal(C7, obtenReal(C1));
    asignaImaginario(C7, obtenImaginario(C1) * -1);
    return C7;
}

