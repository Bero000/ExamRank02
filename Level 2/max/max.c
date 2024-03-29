int max( int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	result = tab[i];

	if (len == 0)
		return (0);
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}
