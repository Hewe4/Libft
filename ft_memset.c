/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:41:08 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 19:17:03 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	content;

	a = s;
	content = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}
