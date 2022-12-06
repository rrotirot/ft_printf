/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:52:52 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 14:52:54 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pt;

	i = 0;
	j = 0;
	pt = malloc(sizeof(*s) * (len + 1));
	if (!pt)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			pt[j] = s[i];
			j++;
		}	
		i++;
	}
	pt[j] = 0;
	return (pt);
}
