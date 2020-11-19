/*
1º) Pida por teclado dos números (datos enteros).

2º) Calcule la suma y multiplicación de los dos números introducidos.

3º) Muestre por pantalla los resultados (datos enteros).
 */

/* 
 * File:   Promedio.c
 * Author: Alan Ricardo
 *
 * Created on 18 de noviembre de 2020, 11:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    
    char nombre [15];
    int n1, n2, n3, promedio;
    
    printf("¿Cuál es su nombre? \n");
    gets(nombre);
    
    printf("\n Ingrese su primer calificación: \n");
    scanf("%d", &n1);
    
    printf("Ingrese su segunda calificación: \n");
    scanf("%d",&n2);
    
    printf("Ingrese su tercer calificación: \n");
    scanf("%d", &n3);
    
    promedio = (n1 + n2 + n3)/3;
    
    printf("\n %s Su promedio es: %d\n", nombre, promedio);

    return (EXIT_SUCCESS);
}

