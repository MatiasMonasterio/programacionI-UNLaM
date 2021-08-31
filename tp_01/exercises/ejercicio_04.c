#include "../macros_helpers.h"

double raizCuadrada (float x, double TOL)
{
    double resultado = 1.0;
    double temp;

    if(x < 0) return 0;
    if(TOL <= 0 || TOL >= 1 ) return 0;

    do
    {
        temp = resultado;
        resultado = 0.5*(resultado + (x/resultado));

    }while(ABS(resultado - temp) > TOL);

    return resultado;
}

// Dominio de x [0; +infinito]
// Dominio de TOL (0;1)
// Imagen [0; +infinito]
