/*Escribe un programa que muestre la tabla de multiplicar de un número.

El parámetro siempre será un número estrictamente positivo que cabe en un int,
y dicho número multiplicado por 9 también encajará en un int.

Si no hay parámetros, el programa muestra \n.*/

#include <unistd.h> //write

int	ft_atoi(char *str)
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


void	ft_putnbr(int n)
{
	char nbr;

	if (n >= 10)
		ft_putnbr(n / 10);
	nbr = n % 10 + '0';
	write(1, &nbr, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		n = ft_atoi(argv[1]);
		i = 0;
		while ( i <= 9)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i ++;
		}
	}
	return (0);
}