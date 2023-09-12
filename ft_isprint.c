/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:06:21 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/09/12 18:32:00 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	bl;
	
	bl = 0;
	if (bl >= 32 && bl <= 126)
	{
		bl = 1;
	}
	return bl;
}