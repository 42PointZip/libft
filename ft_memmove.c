/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:31:50 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 14:05:52 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void			*ft_memmove(void *dst, const char *src, size_t len)
{
	char		*d;
	char		temp;
	size_t		i;

	d = dst;
	i = 0;
	temp = src;
	if (len == 0)
		return (dst);
	if (temp < d)
	{
		d = d + len;
		temp = temp + len;
		while (len > i)
		{
			d[i] = temp[i];
			i++;
		}
	}
	return (dst);
}
