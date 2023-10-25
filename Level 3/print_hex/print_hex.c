#include <unistd.h>

void ft_hex(int hex)
{
	if (hex > 15)
		ft_hex(hex / 16);
	write (1,&"0123456789abcdef"[hex % 16],1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] > 32)
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return res;
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_hex(ft_atoi(av[1]));	
	write (1,"\n",1);
}