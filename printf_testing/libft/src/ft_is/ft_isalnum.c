/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrotirot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:51:24 by rrotirot          #+#    #+#             */
/*   Updated: 2022/10/13 00:51:30 by rrotirot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	else
		return (0);
}
