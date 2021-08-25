/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:18:27 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 22:34:26 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		if (size > 0 && index < size - 1)
		{
			dest[index] = src[index];
		}
		else if (index == size - 1)
		{
			dest[index] = '\0';
		}
		index++;
	}
	dest[index] = '\0';
	return (index);
}

// int main(void)
// {
// 	char a[] = "hjkl456";
// 	char b[] = "123456789";
// 	printf("%d", ft_strlcpy(a, b, 4));
// }