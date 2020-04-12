#include <stdio.h>
#include <stdlib.h>
#include "herramientas.h"

int sumar(int a, int b){
    int rta;
    rta = a + b;
    return rta;
}


int restar(int a, int b){
    int rta;
    rta = a - b;
    return rta;
}


int multiplicar(int a, int b){
    int rta;
    rta = a * b;
    return rta;
}


float dividir(int a, int b){
    float rta;
    rta = (float) a / b;
    return rta;
}


int factorizar(int a){
    int rta;

    if(a <= 1){
        rta = 1;
    }else{
        rta = a * factorizar(a - 1);
    }

    return rta;
}
