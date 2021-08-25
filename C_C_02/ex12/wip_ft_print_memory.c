/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:05:26 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/23 23:25:06 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*char	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}*/

void	*ft_print_memory(void *addr, unsigned int size)
{
	char				*ptr;
	unsigned int		i;
	
	ptr = addr;
	i = 0;
	size++;
	printf("Mem addr: %p\n", &addr[0]);
	printf("Mem addr: %c\n", ptr[0]);
	
	// while (i < size)
	// {
	// 	printf("Addr: %p | %c\n", &addr[i], ptr[i]);
	// 	if (ptr[i] == '\n')
	// 		printf("\n");
	// 	i++;
	// }
	return (addr);
}

int	main(void)
{
	int x = 16;
	char text[] = "Bonjour les aminches\n\n\nc est fo u\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";
	void *supertext;
	supertext = text;
	ft_print_memory(supertext,x);
	//printf("%s",ft_print_memory(supertext,x));
}
