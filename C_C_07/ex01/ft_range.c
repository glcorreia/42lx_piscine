/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:53:42 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/23 12:26:05 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;

	i = 0;
	numbers = (int *)malloc(sizeof(i) * (max - min));
	if (min >= max)
	{
		numbers = NULL;
		return (numbers);
	}
	while (i < max - min)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}

// int	main(void)
// {	
// 	for (int i = 0; i < 5 ; i++)
// 	{
// 		printf("%d", ft_range(5, 10)[i]);
// 	}
// }