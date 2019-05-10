/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iivanov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 12:19:02 by iivanov-          #+#    #+#             */
/*   Updated: 2019/05/06 13:14:55 by iivanov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char ch;
	unsigned char *vd_d;
	unsigned char *vd_s;

	ch = (unsigned char)c;
	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	while (n--)
	{
		*vd_d++ = *vd_s++;
		if (*(vd_s - 1) == ch)
			return ((void*)vd_d);
	}
	return ((void*)(0));
}
