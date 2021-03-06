/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 20:26:15 by ghippoda          #+#    #+#             */
/*   Updated: 2016/11/23 09:43:06 by ghippoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (res != nb && i <= 46340)
	{
		i++;
		res = i * i;
	}
	if (i > 46340)
		return (0);
	else
		return (i);
}
