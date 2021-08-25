/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:24:07 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/24 12:34:58 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destLen;
	unsigned int	srcLen;
	unsigned int	index;

	destLen = ft_strlen(dest);
	srcLen = ft_strlen(src);
	index = 0;
	while (src[index] != '\0' && (destLen + index + 1) < size)
	{
		dest[destLen + index] = src[index];
		index++;
	}
	dest[destLen + index] = '\0';
	if (size > destLen)
		return (destLen + srcLen);
	else
		return (srcLen + size);
}

// int main(void)
// {
// 	char str1[50] = "1aaa";
// 	char str2[] = "123";
// 	char str3[50] = "1aaa";
// 	char str4[] = "123";

// 	printf("ft_strlcat:\t %u | %s\n", ft_strlcat(str1, str2, 3), str1);
// 	printf("strlcat:\t %lu | %s\n", strlcat(str3, str4, 3), str3);
// }
