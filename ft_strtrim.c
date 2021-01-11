/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:14:53 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:14:56 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(char c, const char *set)
{
	int				i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_check(s1[start], set))
		start++;
	if (end == start)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	while (ft_check(s1[end - 1], set))
		end--;
	str = ft_substr(s1, start, (end - start));
	return (str);
}
