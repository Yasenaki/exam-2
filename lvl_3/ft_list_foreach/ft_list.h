/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:10:46 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/24 08:13:53 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_LIST_H__
# define __FT_LIST_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif