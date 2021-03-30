#include <stdio.h>
#include <math.h>

float cuadrado (float * );
void cuadra_dos (float *);
void mostrar(int *);
void Invertir(int *, int *);
void orden(int *, int *);

int main () {
 
float n, x, *p_n;
int a, b,g, *p_a, *p_b , *p_g;

p_n=&n;
p_a=&a;
p_b=&b;
p_g=&g;


//a) Haga una función que devuelva el cuadrado de un número
printf("Ingrese un numero : ");
scanf("%f",&n);
x=cuadrado(p_n);
printf("El cuadrado es %f\n",x);


//b) Haga la función anterior, pero devolviendo un tipo void
cuadra_dos(p_n);


//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la
//variable
printf("Ingrese un numero : ");
scanf("%d",&g);
mostrar(p_g);


//d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
printf("Ingrese un numero : ");
scanf("%d",&a);
printf("Ingrese un numero : ");
scanf("%d",&b);
printf("Los valores invertidos son: \n");
Invertir(p_a,p_b);


/*/e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el
primer parámetro el menor y en el segundo el mayor
printf("El orden de a y b es \n");/*/
printf("Los valores en orden de menor a mayor son: \n");
orden(p_a,p_b);
    
    return 0 ;
}

float cuadrado(float *p_n ){
        float y;
        y=pow(*p_n,2);
        return y;
}

void cuadra_dos (float *p_n){
    *p_n=pow(*p_n,2);
    printf("El cuadrado es %f\n",*p_n);

}

void mostrar(int *p_g){
    printf("La direccion de memoria de la variable es: %p\n",p_g);
     printf("La contenido de la variable es: %d\n",*p_g);

}


void Invertir(int *p_a, int *p_b){
    int aux;
    aux=*p_a;
    *p_a=*p_b;
    *p_b=aux;
    printf("El valor de a es: %d\n",*p_a);
    printf("El valor de b es: %d\n",*p_b);
}

void orden(int *p_a, int *p_b){
    if (*p_a>=*p_b){
    Invertir(p_a,p_b);
    }else{
        printf("El valor de a es: %d\n",*p_a);
        printf("El valor de b es: %d\n",*p_b);
    }

}