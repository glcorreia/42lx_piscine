#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	*populate(int i, int *tab)
{
	tab[0] = (i / 100000000% 10 + '0');	
	tab[1] = (i / 10000000% 10 + '0');	
	tab[2] = (i / 1000000% 10 + '0');	
	tab[3] = (i / 100000% 10 + '0');	
	tab[4] = (i / 10000% 10 + '0');	
	tab[5] = (i / 1000% 10 + '0');
	tab[6] = (i / 100% 10 + '0');
	tab[7] = (i / 10 % 10 + '0');
	tab[8] = (i % 10 + '0');
	return (tab);
}

void	ft_print_combn(int n)
{
	int max_comb[9] = {9,89,789,6789,56789,456789,3456789,23456789,123456789};
	int i,j,k;
	int counter;

	i=counter=j=k= 0;
	
	while (i <= max_comb[n - 1])
	{
		if (n <= 0)
			break ;
		else if (n == 1)
			printf("%d", i);
		else
		{
			if (counter < n)
			{
				j = 0;
				while (j < 10)
				{
					printf("%d", j / 10);
					printf("%d ", j % 10);
					j++;
				}
				
				counter++;
			}
		}		
		
		i++;
		putchar(' ');
	}
	

}

int	main(void)
{
	ft_print_combn(2);
}
