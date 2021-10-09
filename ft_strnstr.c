/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spzona <spzona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:24:20 by spzona            #+#    #+#             */
/*   Updated: 2021/10/09 17:24:35 by spzona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
			x = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && len > i)
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)haystack + x);
		if (j > 0)
			i = x + 1;
		else
			i++;
	}
	return (NULL);
}
