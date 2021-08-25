/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:40:58 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/25 13:30:22 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_get_hexa(char i)
{
	char	*hex;
	
	hex = "0123456789abcdef";
	if (i >= 16)
	{
		ft_putchar(hex[i / 16]);
	}
	else
		ft_putchar('0');
		ft_putchar(hex[i % 16]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr_non_printable(char *str)
{

	printf("(%d)\n", ft_strlen(str));


	while (*str)
	{
		if (*str >= ' ' && *str != 127)
			ft_putchar(*str);
		else if (*str < 0)
		{
			ft_putchar(0);
			ft_putchar(0);
		}
		else
		{
			ft_putchar('\\');
			ft_get_hexa(*str);
		}
		++str;
	}
}


int main(void)
{
	char text1[] = "Coucou\\ntu vas bien ?";
	ft_putstr_non_printable(text1);
	printf("\n");
	char text2[] = "\x01\x02oucou\n\xfe\xff";
	ft_putstr_non_printable(text2);
	return 0;
}
