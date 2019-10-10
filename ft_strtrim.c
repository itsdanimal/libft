/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:51:25 by danli             #+#    #+#             */
/*   Updated: 2019/10/08 16:32:26 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(const char *str)
{
	const char	*tmp;

	tmp = NULL;
	if (str != NULL)
	{
		while (is_space(*str))
			str++;
		if (!*str)
			return (ft_strdup(""));
		tmp = ft_strchr(str, '\0') - 1;
		while (is_space(*tmp))
			tmp--;
	}
	return (ft_strsub(str, 0, tmp - str + 1));
}
