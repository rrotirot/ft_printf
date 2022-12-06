/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:45:14 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:45:34 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char				*pt;
	size_t				i;

	pt = str;
	i = 0 ;
	while (i < n)
	{
		pt[i] = c;
		i++;
	}
	return (str);
}