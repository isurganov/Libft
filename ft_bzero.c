#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)s;
	while (i < n)
	{
		dup[i] = 0;
		i++;
	}
}