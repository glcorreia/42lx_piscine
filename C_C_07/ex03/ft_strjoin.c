/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:50:47 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/24 19:07:28 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	max_len(int size, char **strs, char *sep)
{
	int	sum_len;
	int	sep_len;
	int	i;

	sep_len = ft_strlen(sep);
	sum_len = 0;
	i = 0;
	while (i < size)
	{
		sum_len += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	sum_len -= sep_len;
	return (sum_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*all_strings;

	if (size == 0)
	{
		all_strings = malloc(sizeof(char));
		*all_strings = 0;
		return (all_strings);
	}
	all_strings = (char *)malloc(sizeof(char) * max_len(size, strs, sep) + 1);
	if (!(all_strings))
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(all_strings, strs[i]);
		if (i < size - 1)
			ft_strcat(all_strings, sep);
		i++;
	}
	return (all_strings);
}

int	main(void)
{
	char	*strs[] = {"pedro", "goncalo", "miguel", "joao"};
	char	sep[] = "_";
	int		size;

	size = 4;
	printf("%s", ft_strjoin(size, strs, sep));
}
