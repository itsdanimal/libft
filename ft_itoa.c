/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:50:42 by danli             #+#    #+#             */
/*   Updated: 2019/10/05 13:33:42 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numdigits((long)n, 10);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	str[0] = (n < 0) ? '-' : '0';
	while (n != 0)
	{
		str[--len] = (n % 10) * ((n < 0) ? -1 : 1) + '0';
		n /= 10;
	}
	return (str);
}
