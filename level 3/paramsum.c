//Escriba un programa que muestre el número de argumentos que se le pasan, seguido 
//de una nueva línea.
//Si no hay argumentos, simplemente muestre un 0 seguido de una nueva línea.

#include <unistd.h>

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
	(void)argv;

	ft_putnbr(argc -1);
	write(1, "\n", 1);
	return (0);
}