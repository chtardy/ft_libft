/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:41:22 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/01 15:24:17 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	char	*inter;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	inter = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!inter)
		return (NULL);
	while (s[i])
	{
		inter[i] = f(i, s[i]);
		i++;
	}
	inter[i] = '\0';
	return (inter);
}
