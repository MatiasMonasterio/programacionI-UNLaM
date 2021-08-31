#include "../exercises.h"

unsigned int combinatoriaXY(unsigned int x, unsigned int y)
{
    return x >= y
        ? (factorialEntero(x)) / (factorialEntero(y)*factorialEntero(x-y))
        : 0;
}

// Dominio de y enteros [0, +infinito]
// Dominio de x enteros [0, +infinito]; x >= que y
// Imagen [0; +infinito]
