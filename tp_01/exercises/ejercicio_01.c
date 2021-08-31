unsigned int factorialEntero(unsigned int n)
{
    int factorial = n;
    int i;

    if(n == 0) return 1;

    for(i = n-1; i >= 1; i-- )
    {
        factorial *= i;
    }

    return factorial;
}

// Dominio e imagen de la funcion de 0 al mas infinito
// Numeros enteros
//
