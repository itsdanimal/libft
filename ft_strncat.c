/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:59:17 by danli             #+#    #+#             */
/*   Updated: 2019/10/08 15:47:46 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(dst);
	while ((i < n) && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (dst);
}
