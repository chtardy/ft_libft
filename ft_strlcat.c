/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:25:51 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/28 15:27:54 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen2(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;

	i = 0;
	size_dst = ft_strlen2(dst);
	size_src = ft_strlen2(src);
	if (size_dst >= dstsize)
		return (size_src + dstsize);
	while (src[i] && dstsize - 1 > size_dst + i)
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_dst + size_src);
}
/*
int main()
{
	char dst[40];
	const char src[13] = "Salut a tous";
	size_t dstsize = 40;
	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%zu\n", strlcat(dst, src, dstsize));
}
*/
