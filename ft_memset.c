/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:59:33 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 21:20:42 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*inter;

	inter = b;
	while (len > 0)
	{
		*inter = (unsigned char) c;
		inter++;
		len--;
	}
	return (b);
}
/*
int main()
{
	char test[6] = "hello";
	int c = 48;
	size_t len = 3;
	printf("%s\n", ft_memset(test, c, len));
	printf("%s\n", memset(test, c, len));

}
*/