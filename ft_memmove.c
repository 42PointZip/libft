/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:31:50 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/13 14:44:24 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	delta;

	delta = 1;
	i = 0;
	if(dst > src)
	{
		delta = -1;
		i= len - 1;
		len = 1;
	}
	while (i * delta <= (int)len - 1)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i = i + delta;
	}
	return (dst);
}
