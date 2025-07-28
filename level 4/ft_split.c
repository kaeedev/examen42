/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:50:40 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/22 11:30:20 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
    char	**word = malloc(100 * sizeof(char *));
	int		i = 0;
	char	*start;

	if (!word)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str ++;
		if (!str)
			break ;
		start = str;
		while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
			str ++;
		word[i] = malloc(start - str + 1);
		if (!word)
			return (NULL);
		int j = 0;
		while (start < str)
			word[i][j] = *start++;
		word[i][j] = '\0';
		i ++;
	}
	word[i] = NULL;
	return (word);
}


