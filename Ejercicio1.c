/*
 Ejercicio de lenguaje C - De Dolar a Peso Mexicano 
 
 Escribir en lenguaje C un programa que:

1º) Pida por teclado una cantidad (dato entero).

2º) Calcule la equivalente de dolar en pesos mexicanos.

3º) Muestre por pantalla el resultado (dato real).
 */

/* 
 * File:   Ejercicio1.c
 * Author: Alan Ricardo
 * Created on 18 de noviembre de 2020, 10:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define  Pesos_mex 20.37

int main(int argc, char** argv) {
    
    int dolar; 
    float conversion; 
    
    printf("Ingrese la cantidad de Dolar\n");
    scanf("%d", &dolar);
    
    conversion = dolar * Pesos_mex; 
                   
    printf("\nLa cantidad en pesos mexicanos son:\n %.2f", conversion);       

    return (EXIT_SUCCESS);
}

