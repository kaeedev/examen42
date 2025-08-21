#include <stdlib.h>

//Debe asignar (con malloc()) una matriz de números enteros, llenarla con números 
//consecutivos, valores que comienzan al final y terminan al inicio (¡incluidos 
//el inicio y el final!), luego devuelve un puntero al primer valor de la matriz.

int	*ft_rrange(int start, int end)
{
	int	*range;
	int i = 0;
	int	step = 1;
	int	n = end - start;

	if (n < 0)
		(n *= -1);
	n ++;
	range = (int *)malloc(sizeof(int) * n);
	if (!range)
		return (NULL);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end += step;
			i ++;
		}
	}
	return (range);
}