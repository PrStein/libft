/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:55:08 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/22 12:55:45 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*trace;
	
	if (!(trace = malloc(count * size)))
		return (NULL);
	while (*trace)
	{
		*trace = 0;
		trace++;
	}
	return (trace);
}
