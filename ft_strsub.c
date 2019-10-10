/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:42:25 by danli             #+#    #+#             */
/*   Updated: 2019/09/26 08:42:50 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	if (!s || !(ptr = ft_memalloc(len + 1)))
		return (NULL);
	ptr = ft_strncpy(ptr, (char*)s + start, len);
	return (ptr);
}
