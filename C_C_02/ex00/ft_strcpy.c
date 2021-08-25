/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:21:40 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 22:19:44 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char a[] = "XvkQiOlqyqrIkhMXXwFbij";
// 	char b[] = "zhLKHDmqyqrIkhMXXwFbij";
// 	printf("%s", ft_strcpy(a, b));
// }