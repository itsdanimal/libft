/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:49:59 by danli             #+#    #+#             */
/*   Updated: 2019/10/04 10:12:58 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		++i;
	}
	return (res);
}
