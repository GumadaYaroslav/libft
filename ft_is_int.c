#include "libft.h"

int	is_int(long long num)
{
	if (num > (long)2147483647 || num < (long)-2147483648)
		return (0);
	return (1);
}
