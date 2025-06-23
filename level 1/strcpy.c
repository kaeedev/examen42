/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:32:09 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 16:20:07 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Hacer una copia de s2 en s1
#include <stdio.h>
char    *strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char s1[100];
    char *s2 = "LOOOOL";

    printf("%s\n", strcpy(s1, s2));
    return (0);
}