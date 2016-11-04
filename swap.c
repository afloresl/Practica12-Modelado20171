/* Biblioteca estandar para poder usar
 * las funciones declaradas en el programa.
 */
#include <stdio.h>

/* Funcion que dados dos apuntadores tipo int (a y b), 
 * intercambia el valor de 'a' por 'b' y viceversa.
 * NO REGRESA NADA
 */
void swap(int *a, int *b)
{
    /* Variable aux para realizar el cambio de valores, 
    primero debemos guardar la direccion del apuntador 'a'. */
    int aux = *a;
    /* ahora le asignamos 'b' a 'a' */
    *a = *b;
    /* Por ultimo asignaremos a 'b' el valor guardado en aux, es decir 
    la 'a' original. */
    *b = aux;
}

/* Funcion principal del programa, aqui se probara la funcionalidad 
 * de la funcion swap.
 */
int main()
{
    /* Primero definimos los valores de ambas variables. */
    int a = 25;
    int b = 6;

    /* Mostramos los valores iniciales de 'a' y 'b'. */
    printf("Bienvenido.\n Este programa realiza el intercambio de valores entre A y B\n");
    printf("Los valores originales de A y B son:\n A = %d, B = %d\n", a, b);

    /* Necesitamos usar '&' para referirnos a la direccion de la variable. */
    swap(&a, &b);

    /* Mostramos los nuevos valores de 'a' y 'b'. */
    printf("Ahora los nuevos valores de A y B son:\n A = %d, B = %d\n", a, b);
  
    /* El valor que regresa la función, el 0 expresa que el programa 
     * funciono sin ninguna anomalia. */
    return 0;
}