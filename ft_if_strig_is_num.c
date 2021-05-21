#include "libft.h"

int	check_if_its_a_number(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			return (-1);
		str++;
	}
	return (0);
}
