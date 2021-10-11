/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spzona <spzona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:09:31 by spzona            #+#    #+#             */
/*   Updated: 2021/10/11 16:44:16 by spzona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
    char *tmp;

    tmp = (char *)malloc(sizeof(char) * len);
    if (tmp == NULL)
        return (NULL);
        ft_memcpy (tmp, src, len);
        ft_memcpy (dst, tmp, len);
        free (tmp);
        return (dst);
}