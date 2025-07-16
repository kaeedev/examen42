//Escriba una función que tome dos int sin signo como parámetros y devuelva el
//MCM (minimo comun multiplo) calculado de esos parámetros.

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b) //si a es mayor q b, le asignamos a n el valor de a. n debe ser el valor mayor e a y b
		n = a;
	else //sino pues asignamos a n el valor e b
		n = b;
	while (1) //bucle infinito hasta encontrar el mcm de ambos numeros
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n ++;
	}
}