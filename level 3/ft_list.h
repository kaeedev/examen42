/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbe <lalbe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:52:53 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/10 11:17:29 by lalbe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_SIZE_H
#define FT_LIST_SIZE_H

typedef struct    s_list
    {
        struct s_list *next;
        void          *data;
    }                 t_list;

#endif