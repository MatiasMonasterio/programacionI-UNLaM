int perteneceFibonacci (unsigned int value)
{
    int x = 1;
    int y = 1;
    int temp;

    if(value == 0) return 0;

    while(value > y)
    {
        temp = y;
        y = x + y;
        x = temp;
    }

    if(value == y)
        return 1;
    else
        return 0;
}

// Dominio de x [1, +infinito] enteros
// Imagen 0 para falso, 1 para verdadero

