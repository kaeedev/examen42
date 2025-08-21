/*Escriba un programa que tome una o varias cadenas y, para cada argumento,
pone en mayúscula el primer carácter de cada palabra (si es una letra, obviamente),
pone el resto en minúsculas y muestra el resultado en la salida estándar,
seguido de \n.*/

#include <unistd.h> //write

void	str_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i ++;
		}
	}
	return (0);
}