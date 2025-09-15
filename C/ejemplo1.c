/* Ejemplos de uso de punteros en C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejemplo 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejemplo1() {
    int x = 4;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}


/*
Ejemplo 2: Modificar variable usando puntero
Se muestra cómo modificar el valor de una variable a través de su puntero.
- int x = 10; // Variable entera
- int *p = &x; // Puntero a x
- *p = 20; // Se modifica el valor de x usando el puntero
- printf(...) // Se imprime el nuevo valor de x
*/
void ejemplo2() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", x);
}


/*
Ejemplo 3: Puntero a array
Se muestra cómo un puntero puede apuntar al primer elemento de un array.
- int arr[3] = {1, 2, 3}; // Array de enteros
- int *p = arr; // Puntero al primer elemento del array
- printf(...) // Se imprime el valor del primer elemento usando el puntero
*/
void ejemplo3() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %d\n", *p);
}


int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    return 0;
}