/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:43:49 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:43:58 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	char				*pt;

	i = 0;
	pt = (char *)s;
	while (i < n)
	{
		if ((unsigned char)pt[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
