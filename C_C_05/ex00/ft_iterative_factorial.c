/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:53:41 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/19 21:10:25 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (x > 1)
	{
		nb = nb * (x - 1);
		x--;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(6));
// }
