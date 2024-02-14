/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:40 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 00:49:57 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n);
static void	fill_string(char *str, int n, int len, int sign);
static char	*handle_zero(void);
static char	*handle_negative(int n, int *sign);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == 0)
		return (handle_zero());
	sign = 0;
	if (n < 0)
		return (handle_negative(n, &sign));
	len = count_digits(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	fill_string(str, n, len, sign);
	return (str);
}

static int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_string(char *str, int n, int len, int sign)
{
	int	i;

	i = len - 1;
	while (n > 0)
	{
		str[i--] = '0' + (n % 10);
		n /= 10;
	}
	if (sign)
		str[i] = '-';
}

static char	*handle_zero(void)
{
	char	*str;

	str = (char *)malloc(2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*handle_negative(int n, int *sign)
{
	*sign = 1;
	return (ft_itoa(-n));
}
