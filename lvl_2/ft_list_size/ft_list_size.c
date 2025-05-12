// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
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
	node1->data = "Node 1";
	node2->data = "Node 2";
	node3->data = "Node 3";

	// Link the nodes
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	// Call the size function
	int size = ft_list_size(node1);

	// Print the result
	printf("List size: %d\n", size);

	// Free memory
	free(node1);
	free(node2);
	free(node3);

	return 0;
}