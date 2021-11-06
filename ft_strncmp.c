/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:23:27 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/29 14:47:12 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
			return (((unsigned char)s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}
/*
int main()
{
	const char *s1 = "Bonjaur";
	const char *s2 = "Bonjour";
	size_t n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
*/