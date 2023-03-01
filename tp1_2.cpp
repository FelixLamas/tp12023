#include <stdio.h>

int cuadrado(int num);
void cuadrado2(int *ptr_num);
void mostar(int *ptr);
void invertir(int *ptrA, int *ptrB);
void orden(int *ptr1, int *ptr2);

int main(int argc, char const *argv[])
{
    int num, resultado, a, b;
    printf("Ingrese un numero entero:");
    scanf("%d", &num);
    //a) Haga una función que devuelva el cuadrado de un número
    resultado = cuadrado(num);
    printf("El cuadrado del nummero %d es %d\n", num, resultado);
    //b) Haga la función anterior, pero devolviendo un tipo void
    cuadrado2(&num);
    printf("El cuadrado del numero con la funcion void es : %d\n", num);
    /*c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable*/
    mostar(&resultado);
    /*d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    void Invertir(a,b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a*/
    printf("Ingrese el primer valor entero:");
    scanf("%d", &a);
    printf("Ingrese el segundo valor entero:");
    scanf("%d", &b);
    printf("valores antes de usar la funcion invertir: %d y %d\n", a, b);
    invertir(&a, &b);
    printf("valores despues de usar la funcion invertir: %d y %d\n", a, b);
    /*e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
    void orden(a,b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande*/
    printf("valores antes de usar la funcion orden: %d y %d\n", a, b);
    orden(&a, &b);
    printf("valores despues de usar la funcion orden: %d y %d\n", a, b);
    /*f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.*/
    return 0;
}

int cuadrado(int num) {
    return (num * num);
}

void cuadrado2(int *ptr_num){
    int cuadrado;
    cuadrado = (*ptr_num) * (*ptr_num);
    *ptr_num = cuadrado;
}

void mostar(int *ptr){
    printf("La direccion de memoria de la variable es: %p\n", ptr);
    printf("El contenido de la variable es : %d\n", *ptr);
}

void invertir(int *ptrA, int *ptrB){
    int aux;
    aux = *ptrA;
    *ptrA = *ptrB;
    *ptrB = aux;
}

void orden(int *ptr1, int *ptr2){
    if (*ptr1> *ptr2)
    {
        int aux;
        aux = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = aux;
    }    
}