/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:24:41 by ctardy            #+#    #+#             */
/*   Updated: 2021/11/01 18:30:58 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*inter;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	inter = malloc(sizeof(char) * (len + 1));
	if (inter == NULL)
		return (NULL);
	while (s[start] && len > i)
	{
		inter[i] = s[start];
		i++;
		start++;
	}
	inter[i] = '\0';
	return (inter);
}
/*
int main()
{
	const char * ori = "Salut a tous les p'tits loups";
	unsigned int start = 5;
	size_t len = 15;
	printf("%s\n", ft_substr(ori, start, len));
}
*/