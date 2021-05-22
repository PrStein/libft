/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:05:42 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/22 15:25:21 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*copy;

	copy = NULL;
	i = ft_strlen(src);
	copy = malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	copy = ft_strcpy(copy, src);
	return (copy);
}
