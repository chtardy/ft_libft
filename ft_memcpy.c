/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:35:52 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/29 14:44:50 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	return (dst);
}
/*
int main()
{
	char dest[6] = "hello";
	const char src[9] = "TUHkiolj";
	size_t n = 3;
	printf("%s\n", ft_memcpy(dest, src, n));
	printf("%s\n", memcpy(dest, src, n));

}
*/