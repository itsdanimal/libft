/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:17:58 by danli             #+#    #+#             */
/*   Updated: 2019/10/08 15:47:18 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *s, size_t len)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	newstr = ft_memalloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	while (i < len)
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
