/* Biblioteca estandar para poder usar las funciones declaradas en el programa. */
#include <stdio.h>

/* Funcion de ordenamiento BubblueSort, recibe un apuntador a un arreglo de int,
 * y un entero indicando la longitud de dicho arreglo.
 * NO REGRESA NADA.
 */
void bubble_sort(int *arreglo, int longitud) 
{
    /* Usaremos dos for para ir iterando sobre el arreglo.*/
    for(int i = 0; i < longitud - 1; i++) { //Iterando del primero del arreglo hasta el ultimo.
        for(int j = 0; j < longitud - i - 1; j++) { //Iterando del primero hasta el penultimo.
            /* Verifica si arreglo en la posicion j es mayor que el siguiente elemento del arreglo. */
            if(arreglo[j] > arreglo[j + 1]) {
                /* Variable aux para realizar el cambio de valores, primero debemos 
                 * guardar el elemento del arreglo en la posicion j. */
                int aux = arreglo[j];
                /* Ahora le asignamos a arreglo[j] el valor del siguiente elemento del arreglo. */
                arreglo[j] = arreglo[j + 1];
                /* Y le asignaremos a arreglo[j + 1] el valor guardado en aux. */
                arreglo[j + 1] = aux;
            }
        }
    }
}

/* Funcion principal del programa, aqui se probara la funcionalidad 
 * de la funcion bubble_sort.
 */
int main() 
{
    /* Este sera el arreglo a ordenar. */
    int arr[] = {6, 33, 9, 13, 21, 82, 1, 2, 10, 74, 91, 17, 11, 4};
    /* La longitud del arreglo a ordenar. */
    int longitud = 14;

    /* Primero mostramos el arreglo original.*/
    printf("Bienvenido.\n Este programa Ordenara el siguiente arreglo:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arr[i]);
    }

    /* Ordenando el arreglo por medio de la funcion bubble_sort. */
    bubble_sort(arr, longitud);

    /* Imprimiendo el arreglo ya ordenado. */
    printf("\n");
    printf("Ahora se mostrara el arreglo ya ordenado.\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arr[i]);
    }
    
    /* El valor que regresa la función, el 0 expresa que el programa 
     * funciono sin ninguna anomalia. */
    return 0;
}