/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:42:06 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 14:13:24 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cal;
	size_t	len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != '\0')
		i++;
	len = ft_strlen(s1) - i;
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	cal = ft_substr(((char *)s1, i, len + 1));
	return (cal);
}
