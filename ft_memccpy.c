/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:58:42 by danli             #+#    #+#             */
/*   Updated: 2019/09/30 16:10:26 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr;
	unsigned char		*ptr2;
	size_t				i;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		if (ptr[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		++i;
	}
	return (NULL);
}
