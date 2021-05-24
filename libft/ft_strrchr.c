/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadjigui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:38:42 by sadjigui          #+#    #+#             */
/*   Updated: 2021/05/20 13:42:43 by sadjigui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strrchr(const char *str, int s)
{
	int i;

	i = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
			return (c);
		i--;
	}
	return (0);
}
