/*
 Escribir en lenguaje C un programa que:

1º) Pida por teclado la arista (dato real) de un cubo.

2º) Calcule el volumen del cubo.

3º) Muestre por pantalla el resultado (dato real).

Nota: Volumen de un cubo = arista3.
 */

/* 
 * File:   Volumen_cubo.c
 * Author: Alan Ricardo 
 *
 * Created on 18 de noviembre de 2020, 10:51 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    float arista, volumen;
    
    printf("Ingrese la arista de un cubo: \n");
    scanf("%f", &arista);
    
    //volumen = arista*arista*arista;
     volumen = pow(arista, 3);
     
    printf("\n El volumen del cubo es: %.2f", volumen);
    

    return (EXIT_SUCCESS);
}

