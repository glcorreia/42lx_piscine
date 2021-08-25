/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:28:30 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/13 14:24:51 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				if (str[i] < 'a' || str[i] > 'z')
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] = str[i + 1] - 32;
						i = i + 1;
					}
				}
			}	
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	testString[] = "salut";
// 	ft_strcapitalize(testString);
// 	printf("%s", ft_strcapitalize(testString));
// }