/*
1º) Pida por teclado dos números (datos enteros) y sean almacenados en dos variables, llamadas v1 y v2.

2º) Intercambie los valores de las variables.

3º) Muestre por pantalla los valores contendidos en las variables.
 */

/* 
 * File:   Intercambia_valores.c
 * Author: Alan Ricardo
 *
 * Created on 18 de noviembre de 2020, 11:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int v1, v2;
    //int auxiliar;
    
    printf("Ingrese su valor 1: \n");
    scanf("%d", &v1);
    
    printf("Ingrese su valor 2: \n");
    scanf("%d", &v2);
    
    printf("\nIntercasmbio de las variables... \n\n");
    
    /*
     auxiliar = v1
     v1 = v2
     v2 = auxiliar 
     */
    
    printf("Ahora el valor de v1 es: %d", v2);
    printf("\nAhora el valor de v2 es: %d", v1);

    return (EXIT_SUCCESS);
}

