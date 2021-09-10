#ifndef Vector_h
#define Vector_h

#define SIZE 20

struct _vector
{
    float *elements;
    size_t n_elements;
};

typedef struct _vector* Vector;

int array[SIZE];

// Initialises Vector

Vector initVector(size_t size);

void printArray (size_t n, int array[n]);


#endif