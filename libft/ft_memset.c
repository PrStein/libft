/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:58:25 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/25 15:58:41 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *pointer, int value, size_t count)
{
    size_t i;

    i = 0;
    if (!pointer)
        return (NULL);
    while (i < count)
    {
        *(unsigned char *)(pointer + i) = (unsigned char)value;
        i++;
    }
    return (pointer);
}
