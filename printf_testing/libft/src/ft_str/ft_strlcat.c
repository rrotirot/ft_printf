/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:49:29 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:49:33 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	{
		while (src[j] && (i + j + 1) < size)
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i < size)
			dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
