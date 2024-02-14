/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:15:13 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 20:40:07 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	ld = 0;
	while (dst[ld] != '\0' && ld < l)
		ld++;
	ls = 0;
	while (src[ls] != '\0')
		ls++;
	i = ld;
	while (src[i - ld] != '\0' && i < l - 1)
	{
		dst[i] = src[i - ld];
		i++;
	}
	dst[i] = '\0';
	if (l < ld)
		return (l + ls);
	return (ld + ls);
}
