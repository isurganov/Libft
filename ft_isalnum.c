#include "libft.h"

int		ft_isalnum(int c)
{
	int n;

	n = ft_isalpha(c) + ft_isdigit(c);
	if (n > 0)
		return (1);
	else
		return (0);
}