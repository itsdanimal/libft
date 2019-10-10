/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:30:57 by danli             #+#    #+#             */
/*   Updated: 2019/09/30 15:57:44 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndl, size_t len)
{
	unsigned int i;
	unsigned int pos;

	if (!*ndl)
		return ((char*)hstk);
	pos = 0;
	while (hstk[pos] != '\0' && (size_t)pos < len)
	{
		if (hstk[pos] == ndl[0])
		{
			i = 1;
			while (ndl[i] != '\0' && hstk[pos + i] == ndl[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (ndl[i] == '\0')
				return ((char *)&hstk[pos]);
		}
		++pos;
	}
	return (0);
}
