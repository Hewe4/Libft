/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:14:16 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 20:03:13 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*cal;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	cal = (char *)malloc((len + 1) * sizeof(char));
	if (!cal)
		return (NULL);
	while (i < len)
	{
		cal[i] = f(i, s[i]);
		i++;
	}
	cal[len] = '\0';
	return (cal);
}
