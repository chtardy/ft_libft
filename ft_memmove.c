/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:14:41 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/01 15:22:57 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (!dst && !src)
		return (NULL);
	if (dest > source)
	{
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len --;
		}
	}
	while (len > 0)
	{
		dest[i] = source[i];
		i++;
		len--;
	}
	return (dst);
}
/*
int main()
{
	char dest[7] = { 0,  0,  0,  0,  0,  0, 0};
	const char src[7] = {65, 66, 67, 68, 69, 0, 45};
	size_t len = 7;
	printf("%s\n", ft_memmove(dest, src, len));
	printf("kikoo je suis le separateur\n");
	printf("%s\n", memmove(dest, src, len));
}
*/