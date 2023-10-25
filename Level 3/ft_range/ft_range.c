#include <stdlib.h>

int to_abs(int c)
{
	if (c < 0)
		return (-c);
	return c;
}

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = to_abs(end - start) + 1;
	int *res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			res [i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return res;	
}