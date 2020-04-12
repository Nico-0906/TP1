#include <stdio.h>
#include <stdlib.h>

#include "herramientas.h"

int main()
{
    int opcionNumero;
    int num1 = 0;
    int num2 = 0;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorial1;
    int factorial2;
    int bandera1 = 0;
    int bandera2 = 0;

do{

    if(bandera1 == 0){
        printf("\n1. Ingresar 1er operando (A = %d):\n", num1);
    }else{
        printf("\n1. Cambiar 1er operando (A = %d):\n", num1);
    }

    if(bandera2 == 0){
        printf("2. Ingresar 2do operando (B = %d):\n", num2);
    }else{
        printf("2. Cambiar 2do operando (B = %d):\n", num2);
    }

    printf("3. Calcular todas las operaciones:\n");
        printf("    a) Calcular la suma (A + B) \n");
        printf("    b) Calcular la resta (A - B) \n");
        printf("    c) Calcular la division (A / B) \n");
        printf("    d) Calcular la multiplicacion (A * B) \n");
        printf("    e) Calcular el factorial (A!) \n");
    printf("4. Informar resultados:\n");
    printf("5. Salir\n\n\n");


    scanf("%d", &opcionNumero);

    switch (opcionNumero){
        case 1:
            printf("Ingrese primer operando:\n\n");
            scanf("%d", &num1);
            bandera1 = 1;
            break;
        case 2:
            printf("Ingrese segundo operando:\n\n");
            scanf("%d", &num2);
            bandera2 = 1;
            break;
        case 3:
            suma = sumar(num1, num2);
            resta = restar(num1, num2);
            division = dividir(num1, num2);
            multiplicacion = multiplicar(num1, num2);
            factorial1 = factorizar(num1);
            factorial2 = factorizar(num2);
            printf("Se han realizado las operaciones\n\n");
            break;
        case 4:
            printf("a) El resultado de A+B es: %d\n", suma);
            printf("b) El resultado de A-B es: %d\n", resta);
            if(num2 != 0){
            printf("c) El resultado de A/B es: %.2f\n", division); //o “No es posible dividir por cero”
            }else{
            printf("c) No se puede dividir por 0\n");
            }
            printf("d) El resultado de A*B es: %d\n\n", multiplicacion);
            printf("e) El factorial de A es: %d y El factorial de B es: %d\n\n", factorial1, factorial2);
            break;
        case 5:
            printf("\nAdios\n\n");
            opcionNumero = 5;
            break;
        default:
            printf("\nOpcion incorrecta :( \n\n");
            break;
    }

}while(opcionNumero!=5);


    return 0;
}
