/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iivanov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:51:04 by iivanov-          #+#    #+#             */
/*   Updated: 2019/05/07 19:54:54 by iivanov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *source, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(source + i))
		{
			*(dest + i) = *(source + i);
		}
		else
		{
			while (i < len)
			{
				*(dest + i) = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}
