#include <stdlib.h>

int to_abs(int c)
{
	if (c < 0)
		return (-c);
	return c;
}

int	*ft_rrange(int start, int end)
{
    int i = 0;
    int *res = (int*)malloc(sizeof(int) * to_abs(start - end) + 1);

    while(start < end)
    {
        res[i] = end;
        end--;
        i++;
    }
    res[i] = end;
    while(start > end)
    {
        res[i] = end;
        end++;
        i++;
    }
    res[i] = end;
    return(res);
}

// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//
// bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero		bero//

#include <stdlib.h>

int to_abs(int c)
{
	if (c < 0)
		return (-c);
	return c;
}

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len = to_abs(start - end);
	int *res= (int *)malloc(sizeof(int) * len);

	if (!res)
		return NULL;
	
	while (start < end)
	{
		res[i] = end;
		end--;
		i++;
	}
	while (start >= end)
	{
		res[i] = end;
		end++;
		i++;
	}
	return res;
}
