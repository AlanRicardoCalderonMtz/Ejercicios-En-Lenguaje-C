/*
1º) Pida por teclado dos números (datos enteros).

2º) Calcule la suma y multiplicación de los dos números introducidos.

3º) Muestre por pantalla los resultados (datos enteros).
 */

/* 
 * File:   Suma_multi.c
 * Author: Alan Ricardo
 * Created on 18 de noviembre de 2020, 11:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int num1, num2, suma, multi;
    
    printf("Ingrese su primer número: \n");
    scanf("%d", &num1);
    
    printf("Ingrese su segundo número: \n");
    scanf("%d", &num2);
    
    suma = num1 + num2;
    multi = num1 * num2;
    
    printf("\n El resultado de la suma es: %d", suma);
    printf("\n El resultado de la multiplicación es: %d \n", multi);

    return (EXIT_SUCCESS);
}

