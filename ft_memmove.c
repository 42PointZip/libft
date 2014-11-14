/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:31:50 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/14 10:54:14 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptrdst;
	const unsigned char	*ptrsrc;

	if (!len)
		return (dst);
	ptrdst = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	if (ptrsrc < ptrdst)
	{
		ptrdst += len;
		ptrsrc += len;
		while (len--)
			*--ptrdst = *--ptrsrc;
	}
	else
		while (len--)
			*ptrdst++ = *ptrsrc++;
	return (dst);
}
