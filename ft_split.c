/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfissier <mfissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:13:19 by mfissier          #+#    #+#             */
/*   Updated: 2020/06/18 14:13:21 by mfissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count(const char *str, char charset)
{
	int			k;
	int			i;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i] && str[i] != charset)
		{
			k++;
			while (str[i] && str[i] != charset)
				i++;
		}
	}
	return (k);
}

char		*ft_mword(const char *str, char charset)
{
	char		*word;
	int			i;

	i = 0;
	while (str[i] && str[i] != charset)
		i++;
	if (!(word = malloc(sizeof(*word) * i + 1)))
	{
		free(word);
		return (NULL);
	}
	i = 0;
	while (str[i] && str[i] != charset)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_free_the_world(char **split, int count)
{
	int			i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char		**ft_split(const char *s, char c)
{
	char		**str;
	int			phr;
	int			i;

	if (!s)
		return (NULL);
	i = 0;
	phr = ft_count(s, c);
	if (!(str = malloc(sizeof(*str) * (phr + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(str[i] = ft_mword(s, c)))
				return (ft_free_the_world(str, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	str[i] = NULL;
	return (str);
}
