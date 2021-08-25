/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:53:48 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/10 20:12:02 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	sort;

	index = 0;
	sort = 0;
	if (size > 1)
	{
		while (index < size)
		{
			sort = 1;
			while (sort < size)
			{
				if (tab[sort - 1] >= tab[sort])
				{
					ft_swap(&tab[sort], &tab[sort - 1]);
				}
				sort++;
			}
			index++;
		}
	}
}
