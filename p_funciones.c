/* Biblioteca estandar para poder usar las funciones declaradas en el programa. */
#include <stdio.h>

/* Declaración de funciones */

/* Reciben como parametro un apuntador a una funcion que recibe un entero y un entero. */
int misterio1(int (*fun) (int), int); 
void misterio2(void (*fun) (int), int);
/* Reciben como prametro un entero. */
int cuadrado_num(int);
void imprime_num(int);

/* Funcion principal del programa. */
int main()
{
    /* Se declaran apuntadores a funciones. */
    int (*fun1) (int);
    void (*fun2) (int);
    /* Se hace que los apuntadores apunten a las direcciones de memoria de dos funciones. */
    fun1 = &cuadrado_num;
    fun2 = &imprime_num;
    /* Se declara la variable var y se inicializa lo que devuelve la funcion misterio1
     * con parametros fun1 y 3. */
    int var = misterio1(fun1, 3);
    /* la referencia a la funcion misterio2. */
    misterio2(fun2, var);
}

/* Implementacion de la funcion misterio1. */
int misterio1(int (*fun) (int), int num)
{
    /* Se realiza la funcion que se pasa como parametro. 
     * Devuelve un entero. */
  return fun(num);
}

/* Implementacion de la funcion misterio2. */
void misterio2(void (*fun) (int), int num)
{
    /* Se realiza la funcion que se pasa como parametro. 
     * No devulve nada. */
    fun(num);
}

/* Implementacion de la funcion cuadrado_num. */
int cuadrado_num(int num)
{
    /* Regresa el cuadrado del numero que se ingreso como argumento. */
    return num * num;
}

/* Implementacion de la funcion imprime_num. */
void imprime_num(int num)
{
    /* Implime el entero que se pase como argumento*/
    printf("Tada: %d\n", num);
}