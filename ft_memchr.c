/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:12:06 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:12:08 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *tmp_s;

	tmp_s = (unsigned char*)s;
	while (n--)
	{
		if (*tmp_s == (unsigned char)c)
			return ((void *)tmp_s);
		tmp_s++;
	}
	return (0);
}
