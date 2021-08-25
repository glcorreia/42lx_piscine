#include <stdio.h>
#include <unistd.h>

// void ft_print_tabuleiro(char *getTabuleiro)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 35)
// 	{
// 		write(1, &getTabuleiro[i], 1);
// 		write(1, " ", 1);
// 		write(1, &getTabuleiro[i + 1], 1);
// 		write(1, " | ", 3);
// 		write(1, &getTabuleiro[i + 2], 1);
// 		write(1, " ", 1);
// 		write(1, &getTabuleiro[i + 3], 1);
// 		write(1, " ", 1);
// 		write(1, &getTabuleiro[i + 4], 1);
// 		write(1, " | ", 3);
// 		write(1, &getTabuleiro[i + 5], 1);
// 		write(1, " ", 1);
// 		i = i + 6;
// 	}
// }

int	*ft_store_input(int *dest, char *src)
{
	int	index;
	int inputMax;

	index = 0;
	inputMax = 0;
	while (src[index] != '\0' && inputMax < 16)
	{
		if (src[index] >= '0' && src[index] <= '4')
		{
		 	dest[index] = src[index] - 48;
			printf("%d ", dest[index]); // apagar
			inputMax++;
		}
		index++;
	}	
	return (0);
}

// void	ft_input_to_tab(int *dest[0][0], int *src)
// {
// 	dest[0][1] = src[0];
// 	printf("%d ", dest[0][1]);
// 	return (0);
// }

void ft_init_tab(int tab[5][5])
{
	int x = 0;
	int y = 0;

	while (x <= 5)
	{
		while (y <= 5)
		{
			tab[x][y] = 0;
			y++;
		}
		x++;
	} 
}

int main(int narg, char **argv)
{
	int tabuleiro [5][5] = {0};
	int inputClean[] = {};

	if (narg < 1)
	{
		write(1, "Error", 5);
		narg++;
	}
	else
	{
		ft_init_tab(tabuleiro);
		ft_store_input(inputClean, argv[1]);
		printf("\n"); // apagar
		//ft_input_to_tab(tabuleiro, inputClean);
		//ft_print_tabuleiro(tabuleiro);
	}

	
}
