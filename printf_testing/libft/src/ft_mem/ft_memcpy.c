/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:44:36 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:44:39 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	char				*pt;
	const char			*pt1;	
	size_t				i;

	pt1 = src;
	pt = dest;
	i = 0;
	while (i < n)
	{
		pt[i] = pt1[i];
		i++;
	}
	return (dest);
}
