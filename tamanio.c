/* Biblioteca estandar para poder usar
 * las funciones declaradas en el programa.
 */
#include <stdio.h>

/* Funcion principal del programa, 
 * es necesaria esta función para 
 * la ejecucion del mismo.
 */
int main()
{
	/* Función que permite monstrar mensajes en
	 * pantalla al usuario del programa.
	 */
	printf("El tipo Short tiene tamaño de %d bytes\n", sizeof(short));
	printf("El tipo Int tiene tamaño de %d bytes\n", sizeof(int));
	printf("El tipo Unsigned int tiene tamaño de %d bytes\n", sizeof(unsigned int));
	printf("El tipo Apuntador a int tiene tamaño de %d bytes\n", sizeof(int*));
	printf("El tipo Char tiene tamaño de %d bytes\n", sizeof(char));
	printf("El tipo Float tiene tamaño de %d bytes\n", sizeof(float));
	printf("El tipo Double tiene tamaño de %d bytes\n", sizeof(double));
	
	/* El valor que regresa la función,
	 * el 0 expresa que el programa 
	 * funciono sin ninguna anomalia.
	 */
    return 0;
}