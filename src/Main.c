/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include "Vector.h"

int main()
{
    
    Vector dynamicVector = NULL;
    
    dynamicVector = initVector(SIZE);

    printArray(dynamicVector->n_elements, dynamicVector->elements);
    
    printf("Hello World");

    return 0;
}