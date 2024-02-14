/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:15:13 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 00:14:52 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] && dst_len < l)
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	i = dst_len;
	while (*src && i + 1 < l)
	{
		dst[i] = *src++;
		i++;
	}
	if (dst_len < l)
		dst[i] = '\0';
	return (dst_len + src_len);
}
