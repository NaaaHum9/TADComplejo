#include <stdio.h>
#include "Complejo.h"

void manejaMsg(int);
void darComplejos(COMPLEJO, COMPLEJO);
float darEscalar();
void mostrarComplejo(COMPLEJO, COMPLEJO, COMPLEJO, COMPLEJO, COMPLEJO, COMPLEJO, COMPLEJO);

void main(){
    float k;
    COMPLEJO C1,C2,C3,C4,C5,C6,C7;
    C1 = crearComplejo();
    C2 = crearComplejo();
    C3 = crearComplejo();
    C4 = crearComplejo();
    C5 = crearComplejo();
    C6 = crearComplejo();
    C7 = crearComplejo();
    darComplejos(C1, C2);
    C3 = suma(C1, C2);
    C4 = resta(C1, C2);
    k = darEscalar();
    C5 = productoEscalar(C1, k);
    C6 = modulo(C1);
    C7 = conjugado(C1);
    mostrarComplejo(C1, C2, C3, C4, C5, C6, C7);
}

void darComplejos(COMPLEJO C1, COMPLEJO C2){
    float r,i;
    printf("Dar la parte real del complejo 1\n");
    scanf("%f", &r);
    asignaReal(C1, r);
    printf("Dar la parte imaginario del complejo 1 \n");
    scanf("%f", &i);
    asignaImaginario(C1, i);
    printf("Dar la parte real del complejo 2\n");
    scanf("%f", &r);
    asignaReal(C2, r);
    printf("Dar la parte imaginario del complejo 2\n");
    scanf("%f", &i);
    asignaImaginario(C2, i);

}

float darEscalar(){
    float k;
    printf("Ingrese un numero para el producto escalar: ");
    scanf("%f", &k);
    return k;
}

void mostrarComplejo(COMPLEJO C1, COMPLEJO C2, COMPLEJO C3, COMPLEJO C4, COMPLEJO C5, COMPLEJO C6, COMPLEJO C7){
    printf("Cmplejo 1: %0.2f + %0.2fi \n", obtenReal(C1), obtenImaginario(C1));
    printf("Cmplejo 2: %0.2f + %0.2fi \n", obtenReal(C2), obtenImaginario(C2));
    printf("\nLa suma es: %0.2f + %0.2fi \n", obtenReal(C3), obtenImaginario(C3));
    printf("La resta es: %0.2f + %0.2fi \n", obtenReal(C4), obtenImaginario(C4));
    printf("El producto por un escalar es: %0.2f + %0.2fi \n", obtenReal(C5), obtenImaginario(C5));
    printf("El modulo es: %0.2f \n", modulo(C6));
    printf("El conjugado es: %0.2f%0.2fi \n", obtenReal(C7), obtenImaginario(C7));

}

void manejaMsg(int msg){
    char * manejamsg[] = {"No hay memoria disponible...\n",
                        "Memoria liberada...\n"};
    printf("%s", manejamsg[msg]);    
}