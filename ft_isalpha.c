/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:06:46 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/01 18:36:48 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	printf("%d\n%d\n%d\n", ft_isalpha(c), ft_isalpha(c2), ft_isalpha(c3));
	printf("\n\n\n");
	printf("%d\n%d\n%d\n", isalpha(c), isalpha(c2), isalpha(c3));
}*/
