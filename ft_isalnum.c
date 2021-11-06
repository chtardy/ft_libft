/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:12:44 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/28 15:32:16 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isalpha2(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

static int	ft_isdigit2(int c)
{
	int	i;

	i = 0;
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha2(c) == 1 || ft_isdigit2(c) == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() 
{
	int c2 = 'B';
	int c = ' ';
	int c3 = '3';

	printf("%d\n%d\n%d\n", ft_isalnum(c), ft_isalnum(c2), ft_isalnum(c3));
	printf("\n\n\n");
	printf("%d\n%d\n%d\n", isalnum(c), isalnum(c2), isalnum(c3));
}
*/