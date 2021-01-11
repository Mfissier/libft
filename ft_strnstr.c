/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:14:18 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:14:20 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (need[0] == '\0')
		return ((char *)haystack);
	while (haystack[++i] && len > i)
	{
		if (haystack[i] == need[j])
		{
			while ((haystack[i + j]) && (haystack[i + j] == need[j])
					&& len > i + j && (need[j]))
				j++;
			if (!need[j])
				return ((char *)&haystack[i]);
			j = 0;
		}
	}
	return ((char *)0);
}
