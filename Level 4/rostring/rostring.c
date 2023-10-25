#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start, end, fl;    
	if(ac > 1)
    {
        while (av[1][i] == ' ')
            i++;
        start = i;
        while ((av[1][i] != ' ') && av[1][i])
            i++;
        end = i;
        while(av[1][i] == ' ')
            i++;
        while (av[1][i])
        {
            while (av[1][i] == ' ')
            {
                i++;
                fl = 1;
            }
            if(fl)
                write(1, " ",1);
            write(1, &av[1][i],1);
            i++;
            fl = 0;
            if(av[1][i] == '\0')
                write(1, " ",1);
        }
        while (start < end)
            write(1, &av[1][start++],1);
    }
    write(1, "\n",1);
}
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
	int i;
	char	**tab;

	i = 1;
	if (ac > 1)
	{
		tab = ft_split(av[1]);
		while (tab[i])
		{
			ft_putstr(tab[i]);
			write (1, " ", 1);
			i++;
		}
		ft_putstr(tab[0]);
	}
	write (1, "\n", 1);
	return (0);
}
