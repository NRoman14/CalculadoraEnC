#include <stdio.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void main(){
    float digit1, digit2, resultado;
    int valid;
    char op;
    op = ' ';

    while (op != 'Q')
    {
        printf("¿Que operación deseas realizar?\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("Q. Salir\n");
        printf("Ingrese indice de operación: ");
        scanf(" %c", &op);

        if (op != 'Q'){
            do {
            printf("Ingrese primer dígito: ");
            limpiarBuffer();
            valid = scanf(" %f", &digit1);
            }while (valid != 1);

            do {
            printf("Ingrese segundo dígito: ");
            limpiarBuffer();
            valid = scanf(" %f", &digit2);
            }while (valid != 1);

            switch (op){
            case '1':
                resultado = digit1+digit2;
                printf("La suma entre %.2f y %.2f es: %.2f\n", digit1, digit2, resultado);
                break;
            case '2':
                resultado = digit1-digit2;
                printf("La resta entre %.2f y %.2f es: %.2f\n", digit1, digit2, resultado);
                break;
            case '3':
                resultado = digit1*digit2;
                printf("La multiplicación entre %.2f y %.2f es: %.2f\n", digit1, digit2, resultado);
                break;
            case '4':
                if (digit2 != 0){
                    resultado = digit1/digit2;
                    printf("La división entre %.2f y %.2f es: %.2f\n", digit1, digit2, resultado);
                }else{
                    printf("No se puede dividir entre cero\n");
                }
                break;
            default:
                printf("Operación no reconocida\n");
                break;
            }
        }else{
            printf("Adiós");
        }
    }
}