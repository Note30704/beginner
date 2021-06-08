#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	ft_checker(int *lt, int number)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (lt[i] == number)
			return (0);
		i++;
	}
	return (1);
}

void	ft_sort(int n, int *lt)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j <= n)
		{
			if (lt[i] > lt[j])
			{
				tmp = lt[i];
				lt[i] = lt[j];
				lt[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ran(int n)
{
	int	number;
	int	i;
	int	j;
	int	k;
	int	count;
	int	lt[n][6];

	srand(time(NULL));

	i = 0;
	while (i < n)
	{
		count = 0;
		while (count != 6)
		{
			j = 0;
			while (j < 6)
			{
				number = (rand() % 45) + 1;
				if (ft_checker(lt[i], number))
				{
					lt[i][j] = number;
					j++;
					count++;
				}
			}
		}

		ft_sort(n, lt[i]);

		j = 0;
		while (j < 6)
		{
			printf("%d ", lt[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	int	N;

	scanf("%d", &N);
	ran(N);
	return (0);
}
