/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:06:26 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/24 12:49:04 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nombre;
	int	sign;

	i = 0;
	nombre = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nombre = nombre * 10 + str[i] - 48;
		i++;
	}
	return (nombre * sign);
}
/*
int main()
{
    char *str = "2147483647";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
}
*/