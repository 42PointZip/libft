/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:25:10 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 13:54:46 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	const char	*d;
	size_t		i;

	d = s;
	i = 0;
	if (n > 0)
	{
		while (n > i)
		{
			if (d[i] == (unsigned char)c)
				return (&s + i);
			i++;
		}
	}
	return (NULL);
}
