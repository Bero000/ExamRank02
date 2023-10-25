#include <unistd.h>

void	str_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] <= 32)
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
