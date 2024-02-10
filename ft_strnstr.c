/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:48:54 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 19:51:59 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	if (*str2 == '\0')
	{
		return (*str1);
	}
	i = ft_strlen(str2);
	while (*str1 != '\0' && i <= len)
	{
		if (*str1 == *str2 && ft_strncmp(str1, str2, i) == 0)
		{
			return (*str1);
		}
		len--;
		str1++;
	}
	return (NULL);
}
