/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:10:40 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/28 15:45:44 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*inter;
	int		i;

	inter = (char *) s;
	i = 0;
	while (inter[i])
		i++;
	while (i >= 0)
	{
		if (inter[i] == (char)c)
			return (inter + i);
		i--;
	}
	return (0);
}
/*
int main ()
{	
	const char dest[14] = "";
	int c = 'o';
	printf("%s\n", ft_strrchr(dest, c));
	printf("%s\n", strrchr(dest, c));
}
*/