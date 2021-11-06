/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:59:53 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/28 15:44:38 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*inter;
	int		i;

	inter = (char *) s;
	i = 0;
	while (inter[i] != (char)c)
	{
		if (inter[i] == '\0')
			return (NULL);
		i++;
	}
	return (inter + i);
}
/*
int main ()
{	
	const char dest[10] = "tripouille";
	int c = 't' + 256;
	printf("%s\n", ft_strchr(dest, c));
	printf("%s\n", strchr(dest, c));
}
*/