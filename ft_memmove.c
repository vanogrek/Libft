/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iivanov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:27:51 by iivanov-          #+#    #+#             */
/*   Updated: 2019/05/06 14:45:13 by iivanov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *vd_d;
	unsigned char *vd_s;

	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	if (dst > src)
		while (len--)
			*(vd_d + len) = *(vd_s + len);
	else
		while (len--)
			*vd_d++ = *vd_s++;
	return (dst);
}
