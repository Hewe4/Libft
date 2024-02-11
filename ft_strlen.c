/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:45:04 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/11 02:18:12 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int		i;
	size_t	cont;

	cont = 0;
	i = 0;
	while (str[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}
