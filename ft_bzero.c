/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:55:29 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/25 17:46:07 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*inter;

	inter = s;
	while (n > 0)
	{
		*inter = '\0';
		inter++;
		n--;
	}
	return (s);
}
/*
int main()
{
	char test[12] = "hellooooooo";
	size_t n = 3;
	printf("%s\n", ft_bzero(test, n));
	printf("Kikoo je suis le separateur\n");
	printf("%s\n", bzero(test, n));

}
*/