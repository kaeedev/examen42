/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luviso-p <luviso-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:52:53 by luviso-p          #+#    #+#             */
/*   Updated: 2025/07/09 19:54:01 by luviso-p         ###   ########.fr       */
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