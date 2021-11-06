/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:36:48 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 22:00:09 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*inter;

	inter = (unsigned char *) s;
	while (n > 0)
	{
		if (*inter == (unsigned char) c)
			return (inter);
		inter++;
		n--;
	}	
	return (NULL);
}
/*
int main()
{
	const char *test = "Salut a tous";
	int	c = 116;
	size_t n = 10;
	printf("%s\n", ft_memchr(test, c, n));
	printf("\n\n");
	printf("%s\n", memchr(test, c, n));
}
*/