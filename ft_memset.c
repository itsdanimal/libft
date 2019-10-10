/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:28:57 by danli             #+#    #+#             */
/*   Updated: 2019/09/30 15:59:56 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char*)ptr;
	while (n != 0)
	{
		*(tmp++) = (unsigned char)x;
		n--;
	}
	return (ptr);
}
