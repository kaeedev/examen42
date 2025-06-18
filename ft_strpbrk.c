/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:45:05 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/18 14:01:12 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que localiza la primera ocurrrencia en s1 de cualquier byte de s2
//Devuelve un puntero al byte que coincide con uno de los bytes en s2.
//NULL si no encuentra ocurrencia

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *) &s1[i]);
			j ++;
		}
		i ++;
	}
	return (0);
}