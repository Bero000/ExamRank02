#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int start;
	int end;
	int flag;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		while (i >= 0)
		{
			while (av[1][i] <= 32)
				i--;
			end = i;
			while (av[1][i] && av[1][i] > 32)
				i--;
			start = i + 1;
			flag = start;
			while (start <= end)
				write (1,&av[1][start++],1);
			if (flag != 0)
				write (1," ",1);
		}
	}
	write (1,"\n",1);
}

//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//
//		bero		bero		bero		bero		bero		bero		bero//

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char    **ft_split(char *str)
{
	int i,j,k;
	i = 0, k = 0;
	char **split;

	if (!(split =(char **)malloc(sizeof(char) * 256)))
		return NULL;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] =(char *)malloc(sizeof(char) * 4096)))
			return NULL;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = 0;
		k++;
	}
	split[k] = 0;
	return split;
}

int	main(int ac, char **av)
{
	int i = 0;
	char	**words;

	if (ac == 2)
	{
		words = ft_split(av[1]);
		while (words[i] != 0)
			i++;
		i--;
		while (i >= 0)
		{
			ft_putstr(words[i]);
			if (i > 0)
				write (1, " ", 1);
			i--;
		}
	}
	write (1, "\n", 1);
}