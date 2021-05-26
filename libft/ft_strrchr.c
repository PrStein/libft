/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:38:42 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/25 16:32:30 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int i;

	i = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}
