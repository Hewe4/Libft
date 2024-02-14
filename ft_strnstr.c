/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:48:54 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 20:52:05 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	str2_len;

	if (*str2 == '\0')
		return ((char *)str1);
	str2_len = ft_strlen(str2);
	while (*str1 && len >= str2_len)
	{
		if (ft_strncmp(str1, str2, str2_len) == 0)
			return ((char *)str1);
		str1++;
		len--;
	}
	return (NULL);
}
