/*Escribe un programa que tome un número positivo (o cero) expresado en base 10,
y lo muestra en base 16 (letras minúsculas) seguido de una nueva línea.

Si el número de parámetros no es 1, el programa muestra una nueva línea.*/

#include <unistd.h> //write

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str ++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str ++;
	}
	return (sign * result);
}

void	print_hex(int n)
{
	char	*hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}