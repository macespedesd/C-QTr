#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplito1() {
    float y = 3.14;
    float *p = &y;
    printf("Ejemplito 1: y = %.2f, *p = %.2f\n", y, *p);
}

void ejemplito2() {
    char letra = 'A';
    char *p = &letra;
    *p = 'Z';
    printf("Ejemplito 2: letra = %c\n", letra);
}

void ejemplito3() {
    char arr[4] = {'x','y','z','\0'};
    char *p = arr;
    printf("Ejemplito 3: Primer caracter = %c\n", *p);
}

void ejemplito4() {
    int arr[4] = {5,15,25,35};
    int *p = arr;
    printf("Ejemplito 4: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

struct Animal {
    char nombre[20];
    int patas;
};
void ejemplito5() {
    struct Animal a1 = {"Perro", 4};
    struct Animal *ptr = &a1;
    printf("Ejemplito 5: %s tiene %d patas\n", ptr->nombre, ptr->patas);
}

void ejemplito6() {
    char c = 'Q';
    char *p = &c;
    char **pp = &p;
    printf("Ejemplito 6: c = %c, *p = %c, **pp = %c\n", c, *p, **pp);
}

void duplicar(int *n) {
    *n = *n * 2;
}
void ejemplito7() {
    int x = 12;
    duplicar(&x);
    printf("Ejemplito 7: x duplicado = %d\n", x);
}

void ejemplito8() {
    float *p = (float*)malloc(sizeof(float) * 2);
    if(p != NULL) {
        p[0] = 1.5; p[1] = 2.5;
        printf("Ejemplito 8: %.1f %.1f\n", p[0], p[1]);
        free(p);
    }
}

void ejemplito9() {
    char *frutas[3] = {"Mango","Uva","Pera"};
    printf("Ejemplito 9: ");
    for(int i = 0; i < 3; i++) {
        printf("%s ", frutas[i]);
    }
    printf("\n");
}

int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { return a / b; }
void ejemplito10() {
    int (*operacion)(int, int);
    operacion = multiplicar;
    printf("Ejemplito 10: Multiplicar = %d\n", operacion(4, 5));
    operacion = dividir;
    printf("Ejemplito 10: Dividir = %d\n", operacion(20, 4));
}

int main() {
    ejemplito1();
    ejemplito2();
    ejemplito3();
    ejemplito4();
    ejemplito5();
    ejemplito6();
    ejemplito7();
    ejemplito8();
    ejemplito9();
    ejemplito10();
    return 0;
}