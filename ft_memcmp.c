/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:05:33 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 17:13:49 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*d1;
	const unsigned char		*d2;

	d1 = s1;
	d2 = s2;
	while (n > 0)
	{
		if (*d1 != *d2)
			return (*d1 - *d2);
		d1++;
		d2++;
		n--;
	}
	return (0);
}
