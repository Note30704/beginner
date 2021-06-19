#include <stdio.h>

int	alpha[26] = {0,};

void	count_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			alpha[*str - 'a']++;
		else if (*str >= 'A' && *str <= 'Z')
			alpha[*str - 'A']++;
		str++;
	}
}

void	check_frequency(void)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		if (alpha[i] != 0)
			printf("%c: %d, ", 'a' + i, alpha[i]);
		i++;
	}
	printf("\n\n");
}

void	test3(char strings[5][128])
{
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 26)
		{
			alpha[j] = 0;
			j++;
		}
		printf("%s에 대한 빈도수는 다음과 같음\n", strings[i]);
		count_alpha(strings[i]);
		check_frequency();
		i++;
	}
}


int	main(void)
{
	char	strings[5][128] = {"Nice to meet you", "I want to go abroad", "What a wonderful world!", "I am a student in Kookmin universty", "Do not be afraid to give up the good to go for the great"};	
	test3(strings);
	return (0);
}
