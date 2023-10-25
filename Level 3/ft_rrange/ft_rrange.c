#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
    int i = 0;
    int *res = (int*)malloc(sizeof(int) * abs(start - end) + 1);

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

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len = abs(start - end);
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