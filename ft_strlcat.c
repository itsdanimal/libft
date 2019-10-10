/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:54:32 by danli             #+#    #+#             */
/*   Updated: 2019/10/04 10:12:27 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dst[len] && len < n)
		len++;
	i = len;
	while (src[len - i] && len + 1 < n)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < n)
		dst[len] = '\0';
	return (i + ft_strlen((char *)src));
}
