/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:49:55 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/09/18 16:44:39 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrchr(const *str, int c)
{
	int	i;
	
	i = ft_strlen(str);
	if (c == '\0')
	{
		return (*str + i);
	}
	i--;
	while (i > 0)
	{
		if (*(str + i) == c)
		{
			return (*(str + i));
		}
		i--;
	}
	return (NULL);
	
}