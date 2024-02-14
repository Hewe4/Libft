/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:40 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 19:13:00 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	reverse(int n);
static int	digits(int n);

char	*ft_itoa(int n)
{
	char	*cal;
	size_t	l;
	int		i;

	i = 0;
	l = digits(n);
	cal = (char *)malloc((l + 1) * sizeof(char));
	if (!cal)
		return (NULL);
	if (n < 0)
	{
		cal[i++] = '-';
		n *= -1;
	}
	n = reverse(n);
	while (n != 0)
	{
		cal[i++] = (n % 10) + '0';
		n /= 10;
	}
	cal[i] = '\0';
	return (cal);
}

static int	digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	reverse(int n)
{
	int	rev_n;
	int	rem;

	rev_n = 0;
	while (n != 0)
	{
		rem = n % 10;
		rev_n = rev_n * 10 + rem;
		n /= 10;
	}
	return (rev_n);
}
