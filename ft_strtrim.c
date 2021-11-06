/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:56:28 by ctardy            #+#    #+#             */
/*   Updated: 2021/10/28 22:20:03 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		limit;
	char	*inter;

	i = 0;
	limit = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, (int)s1[j]) && j-- >= 0)
		i++;
	j = ft_strlen(s1) - i;
	if (j == (int)ft_strlen(s1) * (-1))
		return (ft_strdup(""));
	inter = malloc(sizeof(char) * (j + 1));
	if (inter == NULL || !s1)
		return (NULL);
	i = 0;
	while (ft_strchr(set, (int)s1[i]) && s1[i])
		i++;
	while (limit < j)
		inter[limit++] = (char)s1[i++];
	inter[limit] = '\0';
	return (inter);
}

/*int	ft_ternary(int cond, int true, int false)
{
	if (cond == 1)
		return (true);
	return (false);
}

size_t	ft_start_str(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i = ft_ternary((set[j] == s1[i]), i + 1, i);
		j = 0;
		while (s1[i] != set[j])
		{
			while (set[j])
			{
				j = ft_ternary((set[j] != s1[i]), j + 1, j);
				if (set[j] == s1[i])
				{
					i++;
					j = 0;
				}
			}
			printf("Valeur de i : %d\n", i);
			return (i);
		}
	}
	return (0);
}

size_t	ft_end_str(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = ft_strlen(s1);
	j = 0;
	while (i > 0)
	{
		while (s1[i--] == set[j])
			j = 0;
		while (s1[i] != set[j])
		{
			while (set[j])
			{
				if (set[j] != s1[i])
					j++;
				if (set[j] == s1[i])
				{
					i--;
					j = 0;
				}
			}
			printf("Valeur de i end : %d\n", (int)i);
			return (i);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*inter;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = ft_start_str(s1, set);
	end = ft_end_str(s1, set);
	if (ft_strlen(set) == 0)
		return (ft_strdup((char *)s1));
	if ((size_t)start > ft_strlen(s1))
		return (ft_strdup(""));
	inter = malloc(sizeof(char) * ((end++) + 1 - start + 1));
	if (inter == NULL)
		return (NULL);
	while (start <= end)
		inter[i++] = s1[start++];
	inter[i] = '\0';
	return (inter);
}
*/
/*
 int main (int argc,char *argv[])
 {
	 (void)argc;
	 puts(ft_strtrim(argv[1], argv[2]));
	 
	return (0);
 }
 */