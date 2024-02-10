/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:06:26 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/10 18:58:12 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(const int c)
{
	int	bl;

	bl = 0;
	if (c >= 0 && c <= 177)
	{
		bl = 1;
	}
	return (bl);
}
