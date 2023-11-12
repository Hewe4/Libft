/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:00:59 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/11/12 14:24:08 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *a;
	int	i;

	a = s;
	i = 0;
	while(i < n)
	{
		if(a[i] == (unsigned char) c)
		{
			return (void *) (a + i);
		}
		i++;
	}
	return NULL;
}