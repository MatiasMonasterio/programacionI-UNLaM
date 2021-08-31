double numeroEalaX(double x, double TOL)
{
    double resultado, temp;
    int i = 1;
    int factorial = i;
    int xElevadoI = x;

    if(TOL <= 0 || TOL >= 1 ) return 0;

    resultado = 1 + ((double)xElevadoI/factorial);

    do
    {
        i++;
        temp = resultado;
        xElevadoI *= x;
        factorial *= i;

        resultado += ((double)xElevadoI/factorial);
    } while(resultado - temp > TOL);

    return resultado;
}

// Dominio de x Todos los reales
// Imagen [0; +infinito]
// Tolerancia dominio (0;1)

/*
NOTA A TENER EN CUENTA
Para poder resolver el problema podemos reutilizar la funcion de factorial y crear una funcion para calcular la potencia, pero
esto genera un problema de rendimiento debido a que este enfoque para resolver el numero e a la potencia definida utilizamo el ciclo do while,
esto implica que por cada iteracion se hace el llamado a las funciones correspondientes, las cuales hacen el calculo de los valores desde
el valor inicial. Ejemplo factorial de 8 en la primera iteracion hacemos 1*2, luego 1*2*3, luego 1*2*3*4...
En cambio, en esta resolucion el valor se almacena en la variale factorial, por lo que en cada iteracion no volvemos a calcular el factorial
desde el prinicipio sino que directamente al valor actual le multiplicamos el siguiente. ejmplo primera iteracion 1*2, luego el resultado almacenado
* 3, luego reusultado almacenado *4. Entonces nos ahorramos de hacer las cuentas desde el principio y mejoramos la performance

NOTA N2
No se puede definir unsigned double --> https://stackoverflow.com/questions/32430055/unsigned-double-in-c
Generar validacion en la función para evitar creasheos
*/
