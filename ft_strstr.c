/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:53:22 by danli             #+#    #+#             */
/*   Updated: 2019/09/24 09:37:42 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hstk, const char *ndl)
{
	unsigned int i;
	unsigned int pos;

	if (!*ndl)
		return ((char*)hstk);
	pos = 0;
	while (hstk[pos] != '\0')
	{
		if (ndl[0] == hstk[pos])
		{
			i = 1;
			while (ndl[i] != '\0' && hstk[pos + i] == ndl[i])
				++i;
			if (ndl[i] == '\0')
				return ((char*)&hstk[pos]);
		}
		++pos;
	}
	return (0);
}
