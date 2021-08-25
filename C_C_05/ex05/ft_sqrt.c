/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:18:24 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 21:11:40 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sum_of_counts;
	int	sum_of_odd_nums;

	sum_of_counts = 0;
	sum_of_odd_nums = 1;
	while (nb > 0)
	{
		nb = nb - sum_of_odd_nums;
		sum_of_odd_nums += 2;
		sum_of_counts++;
	}
	if (nb < 0)
		return (0);
	return (sum_of_counts);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(2));
// }