/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:44:46 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/11 02:19:58 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (dst[i] != '\0' && i < l)
	{
		dst[i] = src[i];
		i++;
	}
	if (l != 0)
		dst[i] = '\0';
	return (len);
}
