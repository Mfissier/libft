/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:14:34 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:14:40 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*tmp_s;

	i = 0;
	tmp_s = 0;
	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (s[i])
	{
		if ((char)c == s[i])
			tmp_s = (char *)(s + i);
		i++;
	}
	return (tmp_s);
}
