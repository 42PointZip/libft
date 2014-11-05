/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:04:24 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/04 16:16:12 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 1;
	while (src[i] && i <= n)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\0' && i < n)
		dst[i] = '\0';
	dst[i] = '\0';
	return (dst);
}
