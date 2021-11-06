/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:51:15 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 19:55:01 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main ()
{
	int test = 65;
	int test2 = 90;
	int test3 = 115;

	printf("%c\n%c\n%c\n",ft_tolower(test), ft_tolower(test2), ft_tolower(test3));
}
*/