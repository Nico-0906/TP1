#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcionNumero;
    int primOperando;
    int segOperando;
    char opcionLetra;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorial;
    int factorizador;

    do{
    printf("1-Ingresar 1er operando (A=x):\n");
    printf("2-Ingresar 2do operando (B=y):\n");
    printf("3. Calcular todas las operaciones:\n");
    printf("4. Informar resultados:\n");
    printf("5. Salir\n");

    scanf("%d\n", &opcionNumero);

    switch (opcionNumero){
        case 1:
            scanf("%d", &primOperando);
            break;
        case 2:
            scanf("%d", &segOperando);
            break;
        case 3:
            printf("a) Calcular la suma (A+B) \n");
            printf("b) Calcular la resta (A-B) \n");
            printf("c) Calcular la division (A/B) \n");
            printf("d) Calcular la multiplicacion (A*B) \n");
            printf("e) Calcular el factorial (A!) \n");

            scanf("%c", &opcionLetra);

            switch(opcionLetra){
                case 'a':
                    suma = primOperando + segOperando;
                    printf("La suma es %d\n", suma);
                    break;
                case 'b':
                    resta = primOperando - segOperando;
                    printf("La resta es %d\n", resta);
                    break;
                case 'c':
                    division = (float) primOperando / segOperando;
                    printf("La division es %.2f\n", division);
                    break;
                case 'd':
                    multiplicacion = primOperando * segOperando;
                    printf("La multiplicacion es %d\n", multiplicacion);
                    break;
                case 'e':
                    factorizador = 1;
                    while(factorial > 1) {
                    factorizador *= factorial;
                    factorial--;
                    }
                    printf("El factorial de A es %d\n", factorizador);
                    break;
            break;
            }

    }

    }while(opcionNumero!=5);


    return 0;
}
