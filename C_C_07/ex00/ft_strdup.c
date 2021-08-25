/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:01:48 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/23 10:45:45 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*s2;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	s2 = (char *)malloc(sizeof(*src) * n);
	n = 0;
	while (src[n] != '\0')
	{
		s2[n] = src[n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}

// int	main(void)
// {
// 	char	str[7] = "abcdef";
// 	char	*p1;
// 	char	*p2;

// 	p1 = ft_strdup(str);
// 	p2 = strdup(str);
// 	printf("%s\n", p1);
// 	printf("%s", p2);
// }
