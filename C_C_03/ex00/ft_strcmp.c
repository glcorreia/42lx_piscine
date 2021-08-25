/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:37:47 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/17 18:14:40 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// char str1[50] = "123aasaa";
// char str2[] = "aaab";
// printf("%d | ", ft_strcmp(str1, str2));
// printf("%d\n", strcmp(str1, str2));
// }