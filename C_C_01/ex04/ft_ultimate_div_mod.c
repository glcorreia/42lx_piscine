/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:02:00 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/10 16:48:19 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	resto;

	divisao = (*a / *b);
	resto = (*a % *b);
	*a = divisao;
	*b = resto;
}
