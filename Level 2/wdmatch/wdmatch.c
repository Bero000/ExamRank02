#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	
	if (argc == 3)
	{
		while (argv[2][k] != 0)
		{
			if (argv[1][i] == argv[2][k])
				i++;
			k++;
		}
		if (argv[1][i] == 0)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
