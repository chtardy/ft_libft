/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:48:05 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 16:11:49 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	int	test = -1;
	int	test2 = 'a';
	int	test3 = 128;

	printf("%d\n%d\n%d\n", ft_isprint(test), ft_isprint(test2), ft_isprint(test3));
	printf("\n\n");
	printf("%d\n%d\n%d\n", isprint(test), isprint(test2), isprint(test3));
}
*/