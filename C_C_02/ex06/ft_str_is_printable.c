/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:47:51 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 22:32:20 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	testString[] = "abcder23";

	ft_str_is_printable(testString);
	printf("%d", ft_str_is_printable(testString));
}