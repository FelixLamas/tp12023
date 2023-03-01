#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, *pt_a;

    a = 100;
    pt_a = &a;
    //a) El contenido del puntero
    printf("El contenido del puntero %d\n", *pt_a);
    //b) La dirección de memoria almacenada por el puntero.
    printf("La dirección de memoria almacenada por el puntero %p\n", pt_a);
    //c) la dirección de memoria de la variable.
    printf("la dirección de memoria de la variable. %p\n", &a);
    //d) la dirección de memoria del puntero.
    printf("la dirección de memoria del puntero. %p\n", &pt_a);
    //e) el tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("tamaño de memoria utiliaza %d", sizeof(a));
    return 0;
}
