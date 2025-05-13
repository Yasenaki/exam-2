/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:07:52 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/24 08:17:02 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_list_foreach
// Expected files   : ft_list_foreach.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a list and a function pointer, and applies this
// function to each element of the list.

// It must be declared as follows:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// The function pointed to by f will be used as follows:

// (*f)(list_ptr->data);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
void print_list(void *a)
{
	printf("funtion!%d\n",(int)(long)a);
}
int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));


	node1-> data = (void*)(long)1;
	node2-> data = (void*)(long)2;
	node3-> data = (void*)(long)3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_list_foreach(node1,print_list);
	t_list *out = node1;
	while(out)
	{
			printf("%d\n",(int)(long)out->data);
			out = out->next;
	}
	free(node1);
	free(node2);
	free(node3);
}