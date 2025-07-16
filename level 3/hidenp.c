/*Escriba un programa llamado hidenp que tome dos cadenas y muestre 1
seguido de una nueva línea si la primera cadena está oculta en la segunda,
de lo contrario muestra 0 seguido de una nueva línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculto en s2 si es posible
encuentrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.
Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra una nueva línea.*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[2][j] && argv[1][i])
		{
			if (argv[2][j] == argv[1][i])
				i ++;
			j ++;
		}
		if (!argv[1][i])
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}