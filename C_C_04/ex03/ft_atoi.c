/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:35:32 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 20:46:15 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_spaces(char *str)
{
	int	i;
	int	num_spaces;

	i = 0;
	num_spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		{
			num_spaces++;
		}
		i++;
	}
	return (num_spaces);
}

int	ft_atoi(char *str)
{
	int	i;
	int	isPos;
	int	retValue;

	isPos = 1;
	retValue = 0;
	i = ft_check_spaces(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isPos *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		retValue = retValue * 10 + (str[i] - '0');
		i++;
	}
	return (retValue * isPos);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
