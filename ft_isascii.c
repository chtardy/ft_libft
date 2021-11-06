/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:39:53 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 16:11:22 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() 
{
	int c = -1;
	int c2 = 130;
	int c3 = '3';

	printf("%d\n%d\n%d\n", ft_isascii(c), ft_isascii(c2), ft_isascii(c3));
	printf("\n\n");
	printf("%d\n%d\n%d\n", isascii(c), isascii(c2), isascii(c3));
}
*/