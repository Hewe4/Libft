/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:40 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 13:35:10 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	l;

	l = 0;
	if (nb == 0)
		l = 1;
	else if (nb < 0)
	{
		nb = -nb;
		l++;
	}
	while (nb > 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*cal;
	int		i;

	nb = n;
	i = len(nb);
	cal = (char *)malloc (sizeof(char) * (len(nb) + 1));
	if (!cal)
		return (NULL);
	cal[i--] = '\0';
	if (nb == 0)
		cal[0] = '0';
	if (nb < 0)
	{
		cal[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		cal[i--] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (cal);
}
