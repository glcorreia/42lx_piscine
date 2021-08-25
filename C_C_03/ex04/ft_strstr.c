/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:17:41 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/24 15:19:33 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_needle_len(char *needle)
{
	int	n;

	n = 0;
	while (needle[n] != '\0')
		n++;
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	iFind;
	int	needle_len;

	i = 0;
	needle_len = ft_needle_len(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			iFind = 0;
			while (iFind < needle_len)
			{
				if (to_find[iFind] == str[i + iFind] && iFind == needle_len - 1)
					return (&str[i]);
				else if (to_find[iFind] != str[i + iFind])
					iFind = needle_len;
				iFind++;
			}
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char	str1[] = "ola que tal?";
	char	str2[] = "que";
	printf("%s", ft_strstr(str1, str2));
}