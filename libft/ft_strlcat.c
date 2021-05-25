/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:07:11 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/25 15:52:02 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	desto;

	j = 0;
	i = ft_strlen(dest);
	desto = ft_strlen(dest);                 
	while (src[j] && (j + desto < size - 1) && size != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (desto >= size)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + desto);
}
