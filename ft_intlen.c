/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:27:56 by ghippoda          #+#    #+#             */
/*   Updated: 2016/11/23 09:40:36 by ghippoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_intlen(int n)
{
	int		ret;

	ret = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		ret++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}
