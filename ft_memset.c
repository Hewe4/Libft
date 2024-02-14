/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:41:08 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 20:31:27 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	con;

	a = (unsigned char *)s;
	con = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		a[i] = con;
		i++;
	}
	return (s);
}
