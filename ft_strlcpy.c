/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:44:46 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 00:02:59 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i + 1 < l && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (l > 0)
		dst[i] = '\0';
	return (src_len);
}
