/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iivanov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 18:45:07 by iivanov-          #+#    #+#             */
/*   Updated: 2019/05/03 18:45:31 by iivanov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *vd_d;
	unsigned char *vd_s;

	vd_d = (unsigned char*)dst;
	vd_s = (unsigned char*)src;
	while (n--)
		*vd_d++ = *vd_s++;
	return (dst);
}
