/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:17:54 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/24 08:24:30 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
// $>

#include "ft_list.h"
void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*current;
	t_list		*previous;

	previous = 0;
	current = *begin_list;
	while (current)
	{
		if ((cmp)(current->data, data_ref) == 0)
		{
			if (previous == 0)
				*begin_list = current->next;
			else
				previous->next = current->next;
			free(current);
		}
		previous = current;
		current = current->next;
	}
}
int ft_compare(int a, int b)
{
	if(a == b)
		return(0);
	return(1);
}
int main()
{

	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return 1;

	node1->data = (void*)(long) 0;
	node2->data = (void*)(long) 1;
	node3->data = (void*)(long) 2;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	ft_list_remove_if(&node1,(void *)3,ft_compare);
	t_list *out = node1;
	while(out)
	{
		printf("%d\n",(int)(long)out->data);
		out = out ->next;
	}
	return(0);
}