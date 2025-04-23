/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:11:16 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 17:09:23 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// charargcters that appear in either one of the strings.

// The display will be in the order charargcters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cargche rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

#include <unistd.h>
int		not_seen_before(char *s, int len, char c)
{
	int	x;

	x = -1;
	while(++x < len)
		if (s[x] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	x;
	int	y;

	x = -1;
	while (s1[++x])
		if (not_seen_before(s1, x, s1[x]))
			write(1, &s1[x], 1);
	y = -1;
	while (s2[++y])
		if (not_seen_before(s1, x, s2[y]) & not_seen_before(s2, y, s2[y]))
			write(1, &s2[y], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}