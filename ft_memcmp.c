/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:27:35 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 19:21:35 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;
	int				x;

	i = 0;
	x = 0;
	a = s1;
	b = s2;
	while (i < n)
	{
		x = a[i] - b[i];
		if (x != 0)
			return (x);
		i++;
	}
	return (x);
}
