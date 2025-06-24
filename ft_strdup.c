/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:29:44 by luviso-p          #+#    #+#             */
/*   Updated: 2025/06/18 13:37:50 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int		i;
	char	*copy;
	int		len;

	i = 0;
	while (s[len])
		len ++;
	copy = (char *)malloc(sizeof(*copy) * (len + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i ++;
	}
	copy[i] = "\0";
	return (copy);
}