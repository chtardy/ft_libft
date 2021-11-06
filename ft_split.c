/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:32:53 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/29 20:33:48 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_split(char const *s, char c)

{
	char	*inter;
	size_t	i;
	size_t	count;

	i = 0;
	inter = (char *)s;
	count = 0;
	while (inter[i])
	{
		if (inter[i] != c)
		{
			count++;
			while (inter[i] && inter[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	const char	*start;
	int			i;
	int			len;

	i = 0;
	len = 0;
	split = malloc(sizeof(char *) * (nbr_split(s, c) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c && (int)len++ != -1)
			s++;
		if (*(s - 1) != c)
			split[i++] = ft_substr(start, 0, len);
	}
	split[i] = NULL;
	return (split);
}
/*
int main(void)
{
	char	*str = "";
	char	c = ' ';
	int		i;
	char	**result;

	result = ft_split(str, c);
	i = 0;
	while (result[i])
		printf("%s\n", result[i++]);
}
*/