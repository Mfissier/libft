/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:11:51 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:11:52 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_size(unsigned int n)
{
	int		size;

	size = 0;
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int		nb;
	char				*str;
	unsigned int		size;

	size = 0;
	if (n >= 0)
		nb = n;
	if (n < 0)
	{
		nb = -1 * n;
		size++;
	}
	size = size + ft_get_size(nb);
	if (!(str = malloc(size * sizeof(char) + 1)))
		return (0);
	str[size] = '\0';
	while (size--)
	{
		if (nb >= 0)
			str[size] = (nb % 10) + '0';
		if (size == 0 && n < 0)
			str[size] = '-';
		nb /= 10;
	}
	return (str);
}
