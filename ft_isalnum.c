/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:09:34 by ide-ruit          #+#    #+#             */
/*   Updated: 2023/09/12 18:31:38 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	int bl;

	bl = 0;
	if (c >'0' && c < '9')
	{
		bl = 1;
	}
	return	bl;
}

int	isalpha(int c)
{
	int bl;

	bl = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		bl = 1;
	}
	return	bl;
}

int	ft_isalnum (int c)
{
    int bl;

    bl = 0;
    if(isalpha(c) == 1 || isdigit(c) == 1)
    {
        bl = 1;
    }
    return	bl;
}