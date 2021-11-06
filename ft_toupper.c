/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:38:53 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/20 19:50:18 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main ()
{
	int test = 97;
	int test2 = 122;
	int test3 = 84;

	printf("%c\n%c\n%c\n",ft_toupper(test), ft_toupper(test2), ft_toupper(test3));
}
*/