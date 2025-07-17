/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:50:40 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/14 13:59:14 by luviso-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
    int i = 0, j = 0, k = 0, wc = 0;
    char **out;

    while (str[i]) // 1. Contar palabras
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
    }
    out = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!out)
        return (NULL);
    i = 0;
    while (j < wc) // 2. Rellenar el array
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        k = i;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        out[j] = (char *)malloc(sizeof(char) * (i - k + 1));
        if (!out[j])
			return (NULL);
        int word_i = 0;
        while (k < i)
            out[j][word_i++] = str[k++];
        out[j++][word_i] = '\0';
    }
    out[j] = NULL;
    return (out);
}


