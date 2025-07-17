/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:36:16 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:12:53 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

/* tab = el mapa a modificar. size = el tamaño del mapa. cur = posicion actual. to_fill = caracter original del area q se debe pintar. Por ejemplo, pintamos todos los 1 del mapa con F. Ese 1 es to_fill */
void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x // ¿Estoy fuera del mapa? (arriba, abajo, izquierda o derecha)
	|| tab[cur.y][cur.x] != to_fill) // ¿O la celda actual NO es del color que debo pintar?
		return ; // Si se cumple algo de lo anterior, me detengo.
	tab[cur.y][cur.x] = 'F'; // Pinto la celda actual con 'F'
	// Repito el mismo proceso para las 4 celdas vecinas.
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill); // Izquierda
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill); // Derecha
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill); // Arriba
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill); // Abajo
}

/*begin es el punto de inicio q nosotros queramos darle
Llama a la funcion recursiva fill con los datos iniciales
Flood_fill averigua que caracter hay en el punto de inicio y llama a la funcion fill*/
void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}





/*NO HACE FALTA PARA EL EXAMEN PERO SI PARA EL SO_LONG
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y); //reserva memoria para las filas
	for (int i = 0; i < size.y; ++i) //Bucle para recorrer cada fila
	{
		new[i] = malloc(size.x + 1); //Para cada fila, reserva memoria para las columnas + 1 para el '\0'
		for (int j = 0; j < size.x; ++j) //Bucle para copiar cada caracter de la fila original a la nueva
			new[i][j] = zone[i][j]; 
		new[i][size.x] = '\0'; //Añade el caracter nulo al final de la fila
	}

	return new; //Devuelve el nuevo mapa copiado
}*/