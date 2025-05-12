/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:39:27 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/29 17:54:00 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function
// pointer cmp to select the order to apply, and returns a pointer to the
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h
// that is provided to you. You must include that file
// (#include "list.h"), but you must not turn it in. We will use our own
// to compile your assignment.

// Functions passed as cmp will always return a value different from
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list
// in ascending order:

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }
// --------------------------------------------------------------------------------
// typedef struct s_list t_list;

// struct s_list
// {
// 	int     data;
// 	t_list  *next;
// };
// Online C compiler to run C program online
#include "sort_list.h"
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		holder;
	t_list	*lstcppy;

	lstcppy = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)((int)(long)lst->data, (int)(long)lst->next->data) == 0)
		{
			holder = (int)(long)lst->data;
			lst->data = lst->next->data;
			lst->next->data = (void *)(long)holder;
			lst = lstcppy;
		}
		else
			lst = lst->next;
	}
	lst = lstcppy;
	return (lst);
}
int main(void)
{
	// Create 3 list nodes
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return 1;

	// Assign dummy data
	node1->data = (void *)(long)3;
	node2->data = (void *)(long)2;
	node3->data = (void *)(long)1;

	// Link the nodes
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
    
    t_list *out = sort_list(node1, ascend);
    
	while(out)
	{
		printf("%d\n", (long)out->data);
		out = out ->next;
	}

	// Free memory
	free(node1);
	free(node2);
	free(node3);

	return 0;
}