#ifndef FT_SORT_H
#define FT_SORT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

int ascend(int a, int b)
{
	return (a <= b);
}
#endif