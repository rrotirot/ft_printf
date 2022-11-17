/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:50:50 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 00:51:05 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*pt;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	i = nmemb * size;
	pt = malloc(i);
	if (!pt)
		return (0);
	else
		ft_bzero(pt, i);
	return (pt);
}
