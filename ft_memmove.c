/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:16:14 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:16:16 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	const unsigned char	*source;

	if (!dst && !src)
		return (0);
	source = (unsigned char*)src;
	destination = (unsigned char*)dst;
	if (source < destination)
		while (len--)
			destination[len] = source[len];
	else
		while (len--)
			*(destination++) = *(source++);
	return (dst);
}
