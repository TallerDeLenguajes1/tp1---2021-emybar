#include <stdio.h>

int main(){
    
    int n=123;
    int  *p_n;

    p_n=&n;

//El contenido del puntero//
printf("El contenido del puntero %p\n", *p_n);

//La dirección de memoria almacenada por el puntero//
printf("La direccion de memoria almacenada por el puntero: %p\n", p_n);

//la dirección de memoria de la variable//
printf("la direccion de memoria de 'n' es: %p\n", &n);

// la dirección de memoria del puntero//
printf("la direccion de memoria del puntero es: %p\n", &p_n);

//el tamaño de memoria utilizado por esa variable usando la función sizeof()//
printf("el tamanio de memoria utilizado es: %d", sizeof(n));

    return 0;
}