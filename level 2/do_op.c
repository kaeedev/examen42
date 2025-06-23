/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:41:35 by lalbe             #+#    #+#             */
/*   Updated: 2025/06/17 17:52:22 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Hacer como una especie de calculadora, suma/resta/multiplica/divide el 1re y 3re string. El 2do es el operador
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
        else if (argv[2][0] == '-')
            printf("%d", atoi(argv[1]) - atoi(argv[3]));
        else if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
        else if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
        else if (argv[2][0] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
    }
    printf("\n");
    return (0);
}
