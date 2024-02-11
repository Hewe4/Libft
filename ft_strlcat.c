/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:15:13 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/11 02:22:28 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	len;
	size_t	j;

	j = 0;
	len = ft_strlen(src);
	i = len;
	while (src[j] != '\0' && l < len)
	{
		dst[i] = src[j];
		j++;
	}
}
