/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:32:58 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 13:43:43 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nb)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (nb[i] == ' ' || (nb[i] >= 9 && nb[i] <= 13))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			sign = -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		number = number * 10 + (nb[i] - '0');
		i++;
	}
	return (number * sign);
}
