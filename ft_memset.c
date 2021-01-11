/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:12:38 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:12:40 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*str;
	unsigned int		i;

	i = 0;
	str = (unsigned char *)b;
	while (len--)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
