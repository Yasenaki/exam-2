/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:56:39 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/24 08:29:33 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				x;
	unsigned char		*dup;
	size_t				checker;

	x = 0;
	checker = nmemb * size;
	dup = malloc(nmemb * size);
	if (!dup)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (dup);
	if (size && (checker / size) != nmemb)
		return (NULL);
	while (x < nmemb * size)
	{
		dup[x] = 0;
		x++;
	}
	return (dup);
}
static	void	*free_str(char **out, int lenght)
{
	while (lenght >= 0)
		free(out[lenght--]);
	free(out);
	return (NULL);
}

static	int	counting_words(char const *s, char c)
{
	size_t	i;
	size_t	out;

	out = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			out++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (out);
}

static char	*aloc_words(const char *s, char c)
{
	size_t	i;
	size_t	holder_lenght;
	char	*out;

	i = 0;
	holder_lenght = 0;
	while (s[holder_lenght] && s[holder_lenght] != c)
		holder_lenght++;
	out = (char *)malloc(holder_lenght +1);
	if (!out)
		return (NULL);
	while (i < holder_lenght)
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	out = ft_calloc((counting_words (s, c) + 1), sizeof(char *));
	if (!out)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			out[x] = aloc_words(s, c);
			if (!out[x++])
				return (free_str(out, x - 1));
		}
		while (*s && *s != c)
			s++;
	}
	return (out);
}
#include <stdio.h>

int main()
{
	char **result = ft_split("hello!", ' ');
	for (int i = 0; result[i]; i++)
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
	}
	char **str=ft_split("\0aa\0bbb", '\0');
	for (int i = 0; str[i]; i++)
	{
		printf("str[%d] = \"%s\"\n", i, str[i]);
	}
	return 0;
}