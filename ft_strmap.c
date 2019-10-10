/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 08:48:45 by danli             #+#    #+#             */
/*   Updated: 2019/09/25 16:29:56 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ptr;
	char *ptr2;
	char *result;

	if (!s || !(result = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr = (char*)s;
	ptr2 = result;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	return (result);
}
