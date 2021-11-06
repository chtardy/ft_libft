/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:50:28 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/29 14:50:22 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*inter;
	size_t	join_size;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	join_size = ft_strlen(s1) + ft_strlen(s2);
	inter = malloc(sizeof(char) * join_size + 1);
	if (inter == NULL)
		return (NULL);
	while (s1[i])
	{
		inter[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		inter[i++] = s2[j++];
	inter[i] = '\0';
	return (inter);
}
/*
 int main(int argc, char **argv)
 {
	 (void) argc;
	 printf("%s\n", ft_strjoin(argv[1], argv[2]));
 }
*/