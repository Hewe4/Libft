/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:32:58 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 18:50:40 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nb)
{
	int	i;
	int	sign;
	int	number;
	int	d;

	i = 0;
	sign = 1;
	number = 0;
	d = 0;
	while (nb[i] == ' ' || (nb[i] >= '\t' && nb[i] <= '\r'))
		i++;
	while (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			sign *= -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		d = nb[i] - '0';
		number = number * 10 + d;
		i++;
	}
	return (number * sign);
}
