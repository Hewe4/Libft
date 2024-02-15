/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:03:28 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/15 13:14:00 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*cal;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	cal = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!cal)
		return (NULL);
	ft_memcpy(cal, s1, len1);
	ft_memcpy(cal + len1, s2, len2);
	cal[len1 + len2] = '\0';
	return (cal);
}
