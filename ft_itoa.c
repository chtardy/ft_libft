/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:50:36 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/01 18:30:01 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= (-1);
		len++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	nb;

	sign = 1;
	nb = (long)n;
	len = len_nbr(nb);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		sign *= -1;
	while (len--)
	{
		str[len] = sign * nb % 10 + 48;
		nb /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
/*
int main ()
{
	int i;

	i = 100;
//	while (i < 2000)
	//	{
		//	i++;
		printf("Resultat itoa : %s\n", ft_itoa(i));
	//	}
}
*/
/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}
*/
