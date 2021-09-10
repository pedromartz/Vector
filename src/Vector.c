#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

/*
*Se hace privada la estructura, se hace set y get para poder acceder a las variables
struct _vector
{
    float *elements;
    size_t n_elements;
};
*/

Vector initVector(size_t size) {
    Vector newVector = NULL; //Se usa Null para poder hacer pruebas de errores
    newVector = malloc(sizeof(Vector));
    newVector->elements = calloc(size, sizeof(float));
    newVector->n_elements = size;
    return newVector;
}

void printArray (size_t n, int array[n]) {
    for(int index=0; index<n; index++)
    printf("Memory %ld, index: %zu element %d \n", &array[index], index, array[index]);
}