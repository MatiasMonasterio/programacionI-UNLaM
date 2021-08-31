#include "../macros_helpers.h"

double calcSeno (double x, double TOL)
{
    int i = 1;
    int j = 1;
    int factorial = j;

    double potencia = x;
    double seno = x;
    double aux1;
    double aux2;

    if(TOL <= 0 || TOL >= 1 ) return 0;

    do
    {
        potencia = potencia*x*x;
        factorial = factorial*(j+1)*(j+2);

        aux1 = potencia/factorial;
        aux2 = seno;

        seno = (i%2 == 0)
            ? seno + aux1
            : seno - aux1;

        i++;
        j += 2;

    }while(ABS(aux1) > TOL);

    return seno;
}

// Dominio de x todos los reales
// Dominio de TOL (0;1)
// Imagen [-1; 1]

