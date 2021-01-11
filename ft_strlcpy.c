/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:13:54 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:13:55 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	if (!dst)
		return (0);
	i = ft_strlen((char *)src);
	if (i >= dstsize)
		len = dstsize - 1;
	else
		len = i;
	if (dstsize)
	{
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (i);
}
