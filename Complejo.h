#ifndef _complejo_
#define _complejo_

typedef struct{
    float real;
    float imaginario;

}Complejo;

typedef Complejo* COMPLEJO;//Se redefinio en vez de Complejo* commp

//operaciones
//prototipos
COMPLEJO crearComplejo(void);
void asignaReal(COMPLEJO C, float i);
void asignaImaginario(COMPLEJO C, float i);
float obtenReal(COMPLEJO C);
float obtenImaginario(COMPLEJO C);
COMPLEJO suma(COMPLEJO C1, COMPLEJO C2);
COMPLEJO resta(COMPLEJO C1, COMPLEJO C2);
COMPLEJO productoEscalar(COMPLEJO C1, float k);
COMPLEJO modulo(COMPLEJO C1);
COMPLEJO conjugado(COMPLEJO C1);


#endif