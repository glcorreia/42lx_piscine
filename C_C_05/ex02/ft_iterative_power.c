/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:00:02 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 21:10:56 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	original_base;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	original_base = nb;
	while (power > 1)
	{
		nb = nb * original_base;
		power--;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(2, 8));
// }
