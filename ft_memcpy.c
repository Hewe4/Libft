/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:53:14 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/11/06 17:21:05 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *o, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int	i;
	
	b = o;
	a = d; 
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return d;
}