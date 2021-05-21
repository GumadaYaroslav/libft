#include "libft.h"

int	is_sort(int *s, int len)
{
	int	i;

	i = 1;
	if (len <= 1)
		return (1);
	while (i != len)
	{
		if (s[i] < s[i - 1])
			return (0);
		i++;
	}
	return (1);
}
